// P10904 [À¶ÇÅ±­ 2024 Ê¡ C] ÍÚ¿ó
#include <iostream>
using namespace std;
int n,m,l[2000005],r[2000005],ans = 0,cnt = 0;
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if(x < 0) {
            l[-x]++;
        } else if(x > 0) {
            r[x]++;
        } else {
            cnt++;
        }
    }
    for(int i = 1;i <= m;i++) {
        l[i] += l[i - 1];
        r[i] += r[i - 1];
    }
    for(int i = 1;i <= m;i++) {
        int t = l[i];
        if(m - i * 2 > 0) {
            t += r[m - i * 2];
        }
        ans = max(ans,t);
        t = r[i];
        if(m - i * 2 > 0) {
            t += l[m - i * 2];
        } 
        ans = max(ans,t);
    }
    cout << ans + cnt << endl;
    return 0;
}
