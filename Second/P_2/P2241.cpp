#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,s = 0,r = 0;
    cin >> n >> m;

/*     // ˼·һ
    for(ll x = 0;x <= n;x++) {
        for(ll y = 0;y <= m;y++) {
            ll tmp = min(x,y) + min(y,n - x) + min(n - x,y) + min(m - y,x);
            s += tmp;
            r += n * m - tmp;
        }
    } */


/*     // ˼·��
    for(ll x = 0;x <= n;x++) {
        for(ll y = 0;y <= m;y++) {
            ll tmp = min(x,y);
            s += tmp;
            r += x * y - tmp;
        }
    } */

    // ˼·��
    for(ll x = 1;x <= n;x++) {
        for(ll y = 1;y <= m;y++) {
           if(x == y) {
            s += (n - x + 1) * (m - y + 1);
           } else {
            r += (n - x + 1) * (m - y + 1);
           }
        }
    } 

    cout << s << " " << r << endl;
    return 0;
}