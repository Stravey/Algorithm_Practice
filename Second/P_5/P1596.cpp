#include <iostream>
#include <queue>
using namespace std;

// ����n m ����
// Ԥ���� ���ϵ��� ������ɨ����� 
// �ҵ�һ��û�б���������w �������w����bfs����
// �������е�ˮ ��������ˮ���б�� ans++
// �ظ�����Ĺ��� ֱ����������������

struct point{
    int x,y;
};
int n,m,ans = 0;
int dx[8] = {0,-1,-1,-1,0,1,1,1};
int dy[8] = {-1,-1,0,1,1,1,0,-1};
char land[105][105];
bool mark[105][105] = {0};
queue<point> q;
int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> land[i][j];
        }
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(land[i][j] == 'W' && mark[i][j] == 0) {
                ans++;
                mark[i][j] = 1;
                // bfs
                q.push(point{i,j});
                while(!q.empty()) {
                    point p = q.front();
                    q.pop();
                    for(int k = 0;k < 8;k++) {
                        int x = p.x + dx[k];
                        int y = p.y + dy[k];
                        if(x < 0 || y < 0) {
                            continue;
                        }
                        if(land[x][y] == 'W' && mark[x][y] == 0) {
                            mark[x][y] = 1;
                            q.push(point{x,y});
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}