#include <bits/stdc++.h>
#define int long long
using namespace std;

int H, W;
vector<string> grid;
vector<vector<bool>> visited;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool dfs(int x, int y, bool & boundary) {
    if(x == 0 || x == H - 1 || y == 0 || y == W - 1) {
        boundary = true;
    }
    visited[x][y] = true;

    for(int i = 0; i < 4; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx < 0 || tx >= H || ty < 0 || ty >= W) {
            continue;
        }
        if(grid[tx][ty] == '.' && !visited[tx][ty]) {
            dfs(tx, ty, boundary);
        }
    }
    return boundary;
}

void solve() {
    cin >> H >> W;
    grid.resize(H);
    for(int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    visited.assign(H, vector<bool>(W, false));
    int cnt = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(grid[i][j] == '.' && !visited[i][j]) {
                bool flag = false;
                dfs(i, j, flag);
                if(!flag) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}

signed main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();
    
    return 0;
}