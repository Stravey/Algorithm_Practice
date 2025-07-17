#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 5;
int t,n,size[N],depth[N];
vector<int> g[N];

void dfs(int u,int f) {
    depth[u] = depth[f] + 1;
    size[u] = 1;
    for(int i = 0;i < g[u].size();i++) {
        int v = g[u][i];
        if(v == f) {
            continue;
        }
        dfs(v,u);
        size[u] += size[v];
    }
    return;
}

int main()
{
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1;i <= n;i++) {
            g[i].clear();
        }
        for(int i = 1,u,v;i < n;i++) {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1,0);
        for(int i = 1;i <= n;i++) {
            cout << depth[i] << " " << n - size[i] + 1 << endl;
        }
    }
    return 0;
}