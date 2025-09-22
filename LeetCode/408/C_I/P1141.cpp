#include <iostream>
#include <cstring>
using namespace std;
const int N = 1005;
typedef pair<int,int> PII;
// 数组模拟队列
PII q[N * N];
bool visited[N][N];
int g[N][N];
int n,m;
int cnt[N][N];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int bfs(int x,int y) {
    if(cnt[x][y]) {
        return cnt[x][y];
    }
    int front = 0;
    int rear = 0;
    int ans = 1;
    q[rear++] = {x,y};
    visited[x][y] = true;
    while(front < rear) {
        PII tmp = q[front++];

        for(int i = 0;i < 4;i++) {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];
            if(nx < 1 || nx > n || ny < 1 || ny > n
            || visited[nx][ny] || g[nx][ny] == g[tmp.first][tmp.second]) {
                continue;
            }
            q[rear++] = {nx,ny};
            visited[nx][ny] = true;
            ans++;
        }
    }

    for(int i = 0;i < rear;i++) {
        PII t = q[i];
        cnt[t.first][t.second] = ans;
    }
    return ans;
}
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        string s;
        cin >> s;
        for(int j = 1;j <= n;j++) {
            g[i][j] = s[j - 1] - '0';
        }

    }
    while(m--) {
        int a,b;
        cin >> a >> b;
        cout << bfs(a,b) << endl;
    }
    return 0;
}
