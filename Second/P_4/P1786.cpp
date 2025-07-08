#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// 两次排序
// 第一次排序 帮贡高的在前 输入顺序先的在前
// 更新职位
// 第二次排序 职位高的在前 等级高的在前 输入顺序先的在前

struct people {
    string name;
    string origin;
    int contribution;
    int grade;
    int order;
}p[115];
int n;

string its(int n) {
    if(n == 0) return "BangZhu";
    if(n <= 2) return "FuBangZhu";
    if(n <= 4) return "HuFa";
    if(n <= 8) return "ZhangLao";
    if(n <= 15) return "TangZhu";
    if(n <= 40) return "JingYing";
    return "BangZhong";
}
int sti(string s) {
    if(s == "BangZhu") return 0;
    if(s == "FuBangZhu") return 1;
    if(s == "HuFa") return 2;
    if(s == "ZhangLao") return 3;
    if(s == "TangZhu") return 4;
    if(s == "JingYing") return 5;
    return 6;
}
bool cmp_first(people p1,people p2) {
    if(p1.contribution != p2.contribution) {
        return p1.contribution > p2.contribution;
    }
    return p1.order < p2.order;
}
bool cmp_second(people p1,people p2) {
    int tmp1 = sti(p1.origin);
    int tmp2 = sti(p2.origin);
    if(tmp1 != tmp2) return tmp1 < tmp2;
    if(p1.grade != p2.grade) return p1.grade > p2.grade;
    return p1.order < p2.order;
}

int main() 
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> p[i].name >> p[i].origin >> p[i].contribution >> p[i].grade;
        p[i].order = i;
    }
    sort(p + 3,p + n,cmp_first);
    for(int i = 0;i < n;i++) {
        p[i].origin = its(i);
    }
    sort(p + 3,p + n,cmp_second);
    for(int i = 0;i < n;i++) {
        cout << p[i].name << " " << p[i].origin << " " << p[i].grade << endl;
    }
    return 0;
}