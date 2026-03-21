#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
    int n, m;
    cin >> n >> m;
    
    int l = 0, r = m - 1;
    int top = 0, bot = n - 1;
    int k = 1; // 数字从1开始
    while(l <= r || top <= bot) {
        for(int i = l; i <= r && top <= bot; i++) { // 最上面一行
            a[top][i] = k++;
        }
        top++;
        for(int i = top; i <= bot && l <= r; i++) { // 最右面一列
            a[i][r] = k++;
        }
        r--;
        for(int i = r; i >= l && top <= bot; i--) { // 最下面一行
            a[bot][i] = k++;
        }
        bot--;
        for(int i = bot; i >= top && l <= r; i--) { // 最左面一列
            a[i][l] = k++;
        }
        l++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}