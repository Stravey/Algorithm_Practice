#include <iostream>
#include <algorithm>
#define max_n 510
using namespace std;
int a[max_n][max_n],b[max_n][max_n],n,m,x,y,r,z;

// 进行变化
void change(int x,int y,int r,int z) {
    if(z == 0) {
        for(int i = -r;i <= r;i++) {
            for(int j = -r;j <= r;j++) {
                b[x + j][y - i] = a[x + i][y + j];
            }
        }
    }
    if(z == 1) {
        for(int i = -r;i <= r;i++) {
            for(int j = -r;j <= r;j++) {
                b[x - j][y + i] = a[x + i][y + j];
            }
        }
    }
}
// 初始化
void same() {
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            a[i][j] = b[i][j];
        }
    }
}
// 打印矩阵
void print() {
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    a[1][1] = 1;
    for(int i = 1;i <= n;i++) {
        if(i != 1) {
            a[i][1] = a[i - 1][1] + n;
        }
        for(int j = 1;j <= n;j++) {
            if(j != 1) {
                a[i][j] = a[i][j - 1] + 1;
            }
            b[i][j] = a[i][j];
        }
    }
    for(int i = 1;i <= m;i++) {
        cin >> x >> y >> r >> z;
        change(x,y,r,z);
        same();
    }
    print();
    return 0;
}