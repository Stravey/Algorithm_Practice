#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

// 首先将所有地图格子标注为 1 0为访问过
int map[10][10];
bool visited[10][10];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};
int n,m,t,ans = 0;
int sx,sy,fx,fy,mx,my;

void dfs(int x,int y) {
    if(x == fx && y == fy) {
        ans++;
        return;
    } else {
        for(int i = 0;i <= 3;i++) {
            if(visited[x + dx[i]][y + dy[i]] == 0 && map[x + dx[i]][y + dy[i]] == 1) {
                visited[x][y] = 1;
                dfs(x + dx[i],y + dy[i]);
                visited[x][y] = 0;
            }
        }
    }
}

int main()
{
    cin >> n >> m >> t;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            map[i][j] = 1;
        }
    }
    cin >> sx >> sy >> fx >> fy;
    for(int i = 1;i <= t;i++) {
        cin >> mx >> my;
        map[mx][my] = 0;    
    }
    dfs(sx,sy);
    cout << ans << endl;
    return 0;
}