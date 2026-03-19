#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int hours = 0, minutes = 0, seconds = 0;
    // 小时
    hours = n / 3600;
    // 分钟
    minutes = n / 60 % 60;
    // 秒
    seconds = n % 60;
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}