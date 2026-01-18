#include <iostream>
#include <cstring> 
using namespace std;
int T;
int a[4][4];
bool used[5];
bool check() {
    for(int i = 1;i <= 4;i++) {
        if(!used[i]) {
            return false;
        }
    }
    return true;
}
void solve() {
    for(int i = 0;i < 4;i++) {
        for(int j = 0;j < 4;j++) {
            cin >> a[i][j];
        }
    }
    // 检查每一行
    for(int i = 0;i < 4;i++) {
        memset(used,false,sizeof(used));
        for(int j = 0;j < 4;j++) {
            used[a[i][j]] = true;
        }
        if(!check()) {
            cout << "NO" << endl;
            return;
        }
    }
    // 检查每一列
    for(int i = 0;i < 4;i++) {
        memset(used,false,sizeof(used));
        for(int j = 0;j < 4;j++) {
            used[a[j][i]] = true;
        }
        if(!check()) {
            cout << "NO" << endl;
            return;
        }
    }
    // 检查2x2宫格
    int b_i[4] = {0,0,2,2};
    int b_j[4] = {0,2,0,2};
    for(int i = 0;i < 4;i++) {
        memset(used,false,sizeof(used));
        int bi = b_i[i];
        int bj = b_j[i];
        for(int m = bi;m < bi + 2;m++) {
            for(int n = bj;n < bj + 2;n++) {
                used[a[m][n]] = true;
            }
        }
        if(!check()) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main()
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}