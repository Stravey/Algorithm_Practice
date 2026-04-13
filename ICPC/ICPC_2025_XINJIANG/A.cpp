#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a, b, x, y, p;
    cin >> a >> b >> x >> y >> p;
    
    set<int> s;
    
    for(int i = 0; i * x <= p; i++) {
        int need = p - i * x;
        for(int j = 0; j * y <= need; j++) {
            int na = a + i;
            int nb = b + j;
            s.insert(na * nb);
        }
    }
    
    cout << s.size() << endl;
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
    
    return 0;
}