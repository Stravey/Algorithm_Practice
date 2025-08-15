// P12132 [蓝桥杯 2025 省 B] 可分解的正整数
#include <iostream>
using namespace std;

int main()
{
    int n,ans;
    cin >> n;
    ans = n;
    for(int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if(x == 1) {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}