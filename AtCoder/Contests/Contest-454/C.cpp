#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define int long long
using namespace std;

// BFS模板题
const int N = 3e5 + 10;
vector<int> adj[N];
bool st[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    queue<int> q;
    q.push(1);
    st[1] = true;

    while(!q.empty()) 
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u]) {
            if(!st[v]) {
                st[v] = true;
                q.push(v);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(st[i]) {
            ans++;
        }
    }

    cout << ans << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    while(T--) {
        solve();
    }
    return 0;
}