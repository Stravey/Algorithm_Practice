#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define max_n 100005
using namespace std;

vector<int> v[max_n];
queue<int> q;
int n,m;
bool vis[max_n];

void dfs(int x) {
    cout << x << " ";
    for(int i = 0; i < v[x].size();i++) {
        if(!vis[v[x][i]]) {
            vis[v[x][i]] = true;
            dfs(v[x][i]);
        }
    } 
}

void bfs(int x) {
    q.push(x);
    vis[x] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int i = 0; i < v[x].size();i++) {
            if(!vis[v[x][i]]) {
                vis[v[x][i]] = true;
                q.push(v[x][i]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= m;i++) {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end());
    }
    memset(vis, false, sizeof(vis)); 
    vis[1] = true;
    dfs(1);
    cout << endl; 
    memset(vis, false, sizeof(vis));
    vis[1] = true; 
    bfs(1);
    return 0;
}