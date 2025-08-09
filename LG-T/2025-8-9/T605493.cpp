// T605493 [IAMOI R2] Î´ËÍ³öµÄ»¨
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> tree(n + 1);
    for(int i = 0;i < n - 1;i++) {
        int u,v;
        cin >> u >> v;
        tree[i].push_back(v);
        tree[i].push_back(u);
    }

    vector<int> parent(n + 1,-1);
    vector<int> depth(n + 1,0);
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v : tree[u]) {
            if(parent[v] == -1 && v != parent[u]) {
                parent[v] = u;
                depth[v] = depth[u] + 1;
                q.push(v);
           }
        }
    }

    vector<pair<int,int>> nodes;
    for(int i = 1;i <= n;i++) {
        nodes.emplace_back(depth[i],i);
    }
    sort(nodes.begin(),nodes.end());
    vector<int> bloom(n + 1);
    for(int i = 0;i < n;i++) {
        bloom[nodes[i].second] = n - 1;
    }

    vector<int> beauty(n + 1);
    for (int u = 1; u <= n; ++u) {
        vector<int> path;
        int v = u;
        while (v != 0) {
            path.push_back(bloom[v]);
            v = parent[v];
        }
        sort(path.rbegin(), path.rend());
        int m = path.size();
        beauty[u] = path[(m - 1) / 2];
    }

    vector<int> sorted_beauty = beauty;
    sort(sorted_beauty.begin() + 1, sorted_beauty.end(), greater<int>());

    vector<int> res(n + 1);
    for(int k = 1;k <= n;k++) {
        res[k] = sorted_beauty[k];
    }
    for(int k = 1;k <= n;k++) {
        cout << res[k] << " ";
    }
    cout << endl;
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