// P10900 [蓝桥杯 2024 省 C] 数字诗意
#include <iostream>
using namespace std;
long long n,a[200005],ans = 0;
bool isPowerOfTwo(long long x) {
    return x > 0 && (x & (x - 1)) == 0;
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        // 2的幂不可以表示为连续正整数的和 ！！！
        if(isPowerOfTwo(a[i])) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
