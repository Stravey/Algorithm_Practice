// P12342 [蓝桥杯 2025 省 B/Python B 第二场] 数列差分
#include <iostream>
#include <algorithm>
using namespace std;
long long n,a[100005],b[100005],x,y,ans = 0;
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        cin >> b[i];
    }
    sort(a + 1,a + n + 1);
    sort(b + 1,b + n + 1);
    x = y = n;
    while(true) {
        // 如果 b > a 说明是负数 要改变一次 ans++
        if(b[y] >= a[x]) {
            y--;
            ans++;
        } else {
            x--;
            y--;
        }
        if(!y) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}