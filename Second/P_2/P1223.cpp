#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct water {
    int num; // 每个人接水的质量
    int time; // 每个人接水的时间
}p[1010];

bool cmp(water a,water b) {
    if(a.time != b.time) {
        return a.time < b.time;
    }
    return a.num < b.num;
}

int n,sum = 0;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> p[i].time;
        p[i].num = i;
    }
    sort(p + 1,p + n + 1,cmp);
    for(int i = 1;i <= n;i++) {
        cout << p[i].num << " "; 
        sum += i * p[n - i].time;  // 总时间
    }
    cout << endl;
    cout << fixed << setprecision(2) << 1.0 * sum / n << endl;
    return 0;
}