// P12162 [蓝桥杯 2025 省 C/Java A/研究生组] 数位倍数
// 答案 40500
#include <iostream>
using namespace std;

long long getdigitsum(int x) {
    long long sum = 0;
    while(x != 0) {
        long long a = x % 10;
        sum += a;
        x /= 10;
    }
    return sum;
}

int main()
{
    int ans = 0;
    for(int i = 1;i <= 202504;i++) {
        if(getdigitsum(i) % 5 == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}