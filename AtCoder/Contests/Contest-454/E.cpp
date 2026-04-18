#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> PII;

int n, a, b;
vector<PII> p;
bool visited[505][505];

// 右 下 左 上
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
char dir[] = {'D','R','U','L'};

bool dfs(int x, int y) 
{
    visited[x][y] = 1;
    p.emplace_back(x, y);
    
    if(x == n && y == n) return p.size() == n * n - 1;

    for(int d = 0; d < 4; d ++) 
    {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(nx < 1 || nx > n || ny < 1 || ny > n)
        {
            continue;
        }
        if(visited[nx][ny]) continue;
        if(nx == a && ny == b) continue;

       if(dfs(nx, ny)) return 1;
    }

    p.pop_back();
    visited[x][y] = 0;
    return 0;
}

void solve()
{
    cin >> n >> a >> b;
    p.clear();
    memset(visited, 0, sizeof(visited));

    if((a + b) % 2 == 0) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
    dfs(1, 1);

    for(int i = 0; i + 1 < p.size(); i++) 
    {
        int x1 = p[i].first;
        int y1 = p[i].second;
        int x2 = p[i + 1].first;
        int y2 = p[i + 1].second;
        for(int d = 0; d < 4; d++) {
            if(x1 + dx[d] == x2 && y1 + dy[d] == y2) {
                cout << dir[d];
            }
        }
    }

    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}