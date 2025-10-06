#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--) {
       int n,m;
       cin >> n >> m;
       vector<vector<int>> a(n,vector<int> (m));
       for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cin >> a[i][j];
            }
       }
       vector<int> main_diag(n + m - 1,0);
       vector<int> anti_diag(n + m - 1,0);
       for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                main_diag[i - j + (m - 1)] += a[i][j];
                anti_diag[i + j] += a[i][j];
            }
       }
       int ans = 0;
       for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                int sum = main_diag[i - j + (m - 1)] + anti_diag[i + j] - a[i][j];
                ans = max(ans,sum);
            }
       }
       cout << ans << endl;
    }
    return 0;
}