#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
#define max_n 410
using namespace std;

// ��չ�ڵ�
struct node {
    int x;
    int y;
};
// ����
queue <node> q;
// ���ߵİ˸�����
int walk[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
// -1 ��ʾδ���� ��¼��
int ans[max_n][max_n];

// bfsģ��
int main()
{
    int n,m,sx,sy;
    memset(ans,-1,sizeof(ans));
    cin >> n >> m >> sx >> sy;
    node tmp = {sx,sy};
    q.push(tmp);
    ans[sx][sy] = 0;
    while(!q.empty()) {
        node tmp;
        node t = q.front();
        int tx = t.x;
        int ty = t.y;
        q.pop();
        for(int k = 0;k < 8;k++) {
            // x����
            int x = tx + walk[k][0];
            // y����
            int y = ty + walk[k][1];
            int d = ans[tx][ty];
            if(x < 1 || x > n || y < 1 || y > m || ans[x][y] != -1) {
                continue;
            }
            ans[x][y] = d + 1;
            tmp = {x,y};
            q.push(tmp);
        }
    }
    // ��ӡ���
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}