#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Q1
    bool mark = true;
    set<int> s;
    for(int x : a) {
        if(x < 1 || x > m) {
            mark = false;
        }
        if(s.count(x)) {
            mark = false;
        }
        s.insert(x);
    }
    cout << (mark ? "Yes" : "No") << endl;

    // Q2
    bool flag = true;
    for(int t = 1; t <= m; t++) {
        if(!s.count(t)) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    while(T--)
    {
        solve();
    }
    return 0;
}