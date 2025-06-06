#include <iostream>
#define max_n 22
using namespace std;

// 递推式 f[i,j] = f[i - 1,j] + f[i,j - 1];

long long f[max_n][max_n] = {0};
int a[max_n][max_n],n,m,hx,hy;
int d[9][2] = {{0,0},{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}}; // 马相对于自己可以走的8个方向+自己的位置 共九个

int main()
{
    cin >> n >> m >> hx >> hy;
    for(int i = 0;i < 9;i++) {
        int tmp_x = hx + d[i][0],tmp_y = hy + d[i][1]; 
        if(tmp_x >= 0 && tmp_x <= n && tmp_y >= 0 && tmp_y <= m) {
            a[tmp_x][tmp_y] = 1;
        }
    }
    f[0][0] = 1 - a[0][0];
    for(int i = 0;i <= n;i++) {
        for(int j = 0;j <= m;j++) {
            if(a[i][j]) {
                continue;
            }
            if(i != 0) {
                f[i][j] += f[i - 1][j];
            }
            if(j != 0) {
                f[i][j] += f[i][j - 1];
            }
        }
    }
    cout << f[n][m];
    return 0;
}