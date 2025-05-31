#include <iostream>
using namespace std;

/* 
    (x-1,y-1) (x-1,y) (x-1,y+1)
     (x,y-1)   (x,y)   (x,y+1)
    (x+1,y-1) (x+1,y) (x+1,y+1)
*/

// 左下 下 右下 左 右 左上 上 右上
const int dx[] = {1,1,1,0,0,-1,-1,-1};
const int dy[] = {-1,0,1,-1,1,-1,0,1}; 
const int max_n = 105;
char g[max_n][max_n];
int n,m;

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> g[i][j];
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            if(g[i][j] != '*') {
                int cnt = 0; // 地雷个数
                for(int k = 0;k < 8;k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
                        if(g[nx][ny] == '*') {
                            cnt++;
                        }
                    }
                }
                cout << cnt;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}