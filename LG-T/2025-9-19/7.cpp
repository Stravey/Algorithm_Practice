#include <bits/stdc++.h>
using namespace std;
// T668547 [�������� 202509] �Һ�ϵͳ
int aspirin;  
int time_to_min(int hh, int mm) {
    return hh * 60 + mm;
}

string encrypt_name(const string &name) {
    if (name.size() <= 2) return name;  
    return name[0] + string(name.size() - 2, '*') + name.back();
}

// ԤԼ��Ϣ�ṹ�壺�洢���˵�ԤԼ����
struct Appointment {
    int treat_time;   // ����ʱ��
    string doctor;    // ԤԼҽ��
    int reg_time;     // �Һ�ʱ��
    bool has_signed;  // �Ƿ���ǩ��
};

// ҽ�������еĲ�����Ϣ
struct Patient {
    string name;
    int treat_time;  // ����ʱ��
    int sign_time;   // ǩ��ʱ��
    bool is_late;    // �Ƿ�ٵ�
};

// ҽ�����е���������ϸ���ѭ��ĿҪ��
struct QueueCmp {
    bool operator()(const Patient &a, const Patient &b) const {
        // δ�ٵ��Ĳ��������ڳٵ��Ĳ���
        if (a.is_late != b.is_late) {
            return a.is_late > b.is_late;  // false��δ�ٵ�������true���ٵ���ǰ��
        }
        // ��δ�ٵ���������ʱ����������ʱ����ͬ���Һ�ʱ�����򣨹Һ�ʱ�����ԤԼ��Ϣ�У�
        if (!a.is_late) {
            return a.treat_time > b.treat_time;
        }
        // ���ٵ�����ǩ��ʱ������
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
            bool is_late = (now > appt.treat_time);  // ��������ʱ��Ϊ�ٵ�
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