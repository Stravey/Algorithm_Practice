#include <iostream>
using namespace std;
int T = 1;
void solve() {
    char a[13] = {'A','B','C','D','E','F','G','H','I','J','K','L','M'};
    int n;
    cin >> n;
    if(n == 10) {
        for(int i = 0;i < 10;i++) {
            cout << a[i] << " ";
        }
    } else if(n == 11) {
        for(int i = 0;i < 11;i++) {
            cout << a[i] << " ";
        }
    } else if(n == 12) {
        for(int i = 0;i < 12;i++) {
            cout << a[i] << " ";
        }
    } else if(n == 13) {
        for(int i = 0;i < 13;i++) {
            cout << a[i] << " ";
        }
    }
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}