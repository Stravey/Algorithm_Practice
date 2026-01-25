#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 200010;
vector<int> g[N];  // 邻接表
int sz[N];   // 子树大小
int ans;   // 完美节点个数
int n;
void dfs(int u,int fa) {
    sz[u] = 1;
    bool flag = true;

    for(int v : g[u]) {
        if(v == fa) {
            continue;
        }
        dfs(v,u);
        sz[u] += sz[v];
        if(sz[v] % 2 == 0) {
            flag = false;
        }
        
    }

    int remain = n - sz[u];
    if(remain > 0 && remain % 2 == 0) {
        flag = false;
    }
    if(flag) {
        ans++;
    }
}
void solve() {
    cin >> n;
    ans = 0;
    for(int i = 1;i <= n;i++) {
        g[i].clear();
    }
    for(int i = 1;i < n;i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}