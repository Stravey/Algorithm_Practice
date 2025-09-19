#include <bits/stdc++.h>
using namespace std;
// T668547 [语言月赛 202509] 挂号系统
int aspirin;  
int time_to_min(int hh, int mm) {
    return hh * 60 + mm;
}

string encrypt_name(const string &name) {
    if (name.size() <= 2) return name;  
    return name[0] + string(name.size() - 2, '*') + name.back();
}

// 预约信息结构体：存储病人的预约详情
struct Appointment {
    int treat_time;   // 治疗时间
    string doctor;    // 预约医生
    int reg_time;     // 挂号时间
    bool has_signed;  // 是否已签到
};

// 医生队列中的病人信息
struct Patient {
    string name;
    int treat_time;  // 治疗时间
    int sign_time;   // 签到时间
    bool is_late;    // 是否迟到
};

// 医生队列的排序规则（严格遵循题目要求）
struct QueueCmp {
    bool operator()(const Patient &a, const Patient &b) const {
        // 未迟到的病人优先于迟到的病人
        if (a.is_late != b.is_late) {
            return a.is_late > b.is_late;  // false（未迟到）排在true（迟到）前面
        }
        // 均未迟到：按治疗时间升序；治疗时间相同按挂号时间升序（挂号时间存在预约信息中）
        if (!a.is_late) {
            return a.treat_time > b.treat_time;
        }
        // 均迟到：按签到时间升序
        else {
            return a.sign_time > b.sign_time;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    unordered_map<string, Appointment> appt_map;
    unordered_map<string, priority_queue<Patient, vector<Patient>, QueueCmp>> doctor_queues;

    while (T--) {
        int hh, mm;
        string event_type;
        cin >> hh >> mm >> event_type;
        int now = time_to_min(hh, mm);
        if (event_type == "appointment") {
            string name, doctor;
            int thh, tmm;
            cin >> name >> doctor >> thh >> tmm;
            int treat_time = time_to_min(thh, tmm);
            appt_map[name] = {treat_time, doctor, now, false};
        }
        else if (event_type == "register") {
            string name;
            cin >> name;
            auto appt_it = appt_map.find(name);
            if (appt_it == appt_map.end()) {
                cout << "Fail\n";
                continue;
            }
            Appointment &appt = appt_it->second;
            if (appt.has_signed) {
                cout << "Fail\n";
                continue;
            }
            int earliest = appt.treat_time - 60;
            if (now < earliest || now > appt.treat_time) {
                cout << "Fail\n";
                continue;
            }
            bool is_late = (now > appt.treat_time);  // 晚于治疗时间为迟到
            Patient p{
                name,
                appt.treat_time,
                now,
                is_late
            };
            doctor_queues[appt.doctor].push(p);
            appt.has_signed = true;
            appt_map.erase(appt_it);
            cout << "Success\n";
        }
        else if (event_type == "query") {
            string doctor;
            cin >> doctor;
            auto queue_it = doctor_queues.find(doctor);
            if (queue_it == doctor_queues.end() || queue_it->second.empty()) {
                cout << "No patient\n";
                continue;
            }
            auto &pq = queue_it->second;
            cout << encrypt_name(pq.top().name) << "\n";
            pq.pop();
        }
    }
    return 0;
}