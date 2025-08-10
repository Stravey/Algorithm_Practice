// P12163 [蓝桥杯 2025 省 C/Java A] 2025
// 答案 506754
#include <iostream>
using namespace std;

bool check(int x) {
    int cnt1 = 0,cnt2 = 0,cnt5 = 0;
    while(x != 0) {
        int digit = x % 10;
        if(digit == 0) cnt1++;
        else if(digit == 2) cnt2++;
        else if(digit == 5) cnt5++;
        x /= 10;
    }
    // 至少一个0 两个2 一个5
    return (cnt1 >= 1) && (cnt2 >= 2) && (cnt5 >= 1);
}

int main()
{
    int ans = 0;
    for(int i = 1; i <= 20250412;i++) {
        if(check(i)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}