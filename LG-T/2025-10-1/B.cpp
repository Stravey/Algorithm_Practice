// T631923 [IAMOI R4] 皇后
// 范围太大 不能使用dfs
#include <iostream>
#include <stack>
using namespace std;
/* // x 方向
int dx[8] = {1,1,0,-1,-1,-1,0,1};
// y 方向
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int dfs(int x1,int y1,int x2,int y2) {} */

int solve(int n, int m, int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) return 0;
    
    bool direct = (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2));
    
    if (direct) {
        
        if (x1 == x2) { // 同一行
            if (n == 2 && abs(y1 - y2) > 1) {
                return 3;
            }
            return 2;
        }
        else if (y1 == y2) { // 同一列
            if (m == 2 && abs(x1 - x2) > 1) {
                return 3;
            }
            return 2;
        }
        else { // 同一对角线
            if (n == 2 && m == 2) {
                return 3;
            }
            return 2;
        }
    }
    
    if (n == 2 && m == 2) {
        return 3;
    }
    
    if (n == 2 || m == 2) {
        if (n == 2) {
            if ((x1 == 1 && y1 == 1 && x2 == 2 && y2 == m) ||
                (x1 == 1 && y1 == m && x2 == 2 && y2 == 1) ||
                (x1 == 2 && y1 == 1 && x2 == 1 && y2 == m) ||
                (x1 == 2 && y1 == m && x2 == 1 && y2 == 1)) {
                return 3;
            }
        }
        if (m == 2) {
            if ((x1 == 1 && y1 == 1 && x2 == n && y2 == 2) ||
                (x1 == 1 && y1 == 2 && x2 == n && y2 == 1) ||
                (x1 == n && y1 == 1 && x2 == 1 && y2 == 2) ||
                (x1 == n && y1 == 2 && x2 == 1 && y2 == 1)) {
                return 3;
            }
        }
    }
    return 2;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n,m,x1,y1,x2,y2;
        int ans = 0;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        ans = solve(n,m,x1,y1,x2,y2);
        cout << ans << endl;
    }
    return 0;
}