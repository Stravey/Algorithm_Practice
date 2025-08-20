// P12176 [蓝桥杯 2025 省 Python B] 书架还原
#include <iostream>
using namespace std;
int a[1000005],b[1000005];
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        b[a[i]] = i;
    }
    int ans = 0;
    for(int i = 1;i <= n;i++) {
        if(a[i] != i) {
            b[a[i]] = b[i];
            swap(a[i],a[b[i]]);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}