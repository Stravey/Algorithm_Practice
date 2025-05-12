#include <iostream>
using namespace std;

int n,a[10005],b[10005],g[10005],k[10005];
int x,y,ans = 0;

int main()
{
    cin >> n;
    for(int t = 1;t <= n;t++)
    {
        cin >> a[t] >> b[t] >> g[t] >> k[t];
    }
    cin >> x >> y;
    for(int i = 1;i <= n;i++) {
        if((x >= a[i] && x <= a[i] + g[i]) && (y >= b[i] && y <= b[i] + k[i])) {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}