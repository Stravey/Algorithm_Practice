#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>  
using namespace std;

struct Node {
    int x;
    int y;
    Node(int x, int y) : x(x), y(y) {}  // ��ӹ��캯��
};

queue<Node> q;
int walk[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};  // �������飺�ҡ��¡�����
int ans[310][310], death[310][310];

void updateDeath(int x, int y, int t, int (&death)[310][310]) {
    if (x >= 0 && y >= 0 && x < 310 && y < 310) {  // ���ӱ߽���
        death[x][y] = min(death[x][y], t);
    }
}

int main()
{
    int m;
    memset(ans, -1, sizeof(ans)); 
    memset(death, 0x7f, sizeof(death));
    
    cin >> m;
    for(int i = 1; i <= m; i++) {
        int x, y, t;
        cin >> x >> y >> t;
        updateDeath(x, y, t, death);
        for(int k = 0; k < 4; k++) {
            updateDeath(x + walk[k][0], y + walk[k][1], t, death);
        }
    }
    
    // �������Ƿ�ȫ
    if (0 >= death[0][0]) {
        cout << -1 << endl;
        return 0;
    }
    
    q.push(Node(0, 0));
    ans[0][0] = 0;
    
    while(!q.empty()) {
        Node now = q.front();
        int nx = now.x;
        int ny = now.y;
        q.pop();
        
        for(int k = 0; k < 4; k++) {
            int x = nx + walk[k][0];
            int y = ny + walk[k][1];
            
            // ���ӱ߽���
            if(x < 0 || y < 0 || x >= 310 || y >= 310 || ans[x][y] != -1 || ans[nx][ny] + 1 >= death[x][y]) {
                continue;
            }
            
            ans[x][y] = ans[nx][ny] + 1;
            q.push(Node(x, y));
        }
    }
    
    int Ans = -1;  // ��ʼ��Ϊ-1����ʾ�޷����ﰲȫ����
    for(int i = 0; i < 310; i++) {
        for(int j = 0; j < 310; j++) {
            if(death[i][j] == 0x7f7f7f7f && ans[i][j] != -1) {  // ʹ�ø�׼ȷ�İ�ȫ���ж�����
                if(Ans == -1 || ans[i][j] < Ans) {
                    Ans = ans[i][j];
                }
            }
        }
    }
    
    cout << Ans << endl;
    return 0;
}