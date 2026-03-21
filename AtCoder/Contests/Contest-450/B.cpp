#include <bits/stdc++.h>
#define int long long
using namespace std;

int Cost[105][105];
void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n - 1; i++) {
        for(int j = i + 1; j <= n; j++) {
            cin >> Cost[i][j];
        }
    }
    for(int a = 1; a <= n - 2; a++) {
        for(int b = a + 1; b <= n - 1; b++) {
            for(int c = b + 1; c <= n; c++) {
                if(Cost[a][b] + Cost[b][c] < Cost[a][c]) {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
}

signed main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();
    
    return 0;
}