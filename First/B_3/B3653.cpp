#include <iostream>
using namespace std;

int a[55][55],ans[55][55],n,m;

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            ans[i][j] = 0;
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            for(int x = 1;x <= n;x++) {
                for(int y = 1;y <= m;y++) {
                    if(a[i][j] == a[x][y]) {
                        ans[i][j] = max(ans[i][j],(i - x) * (i - x) + (j - y) * (j - y));
                    }
                }
            }
        }
    } 
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}