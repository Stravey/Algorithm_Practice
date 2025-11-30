#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    if (n > m) swap(n, m); 
    
    if (n == 1) {
        cout << 1 << "\n";
    } else if (n == 2) {
        if (m == 1) cout << 1 << "\n";
        else if (m == 2) cout << 1 << "\n";
        else cout << n * m << "\n";
    } else if (n == 3 && m == 1) {
        cout << 1 << "\n";
    } else if (n == 3 && m == 3) {
        cout << 8 << "\n";
    } else {
        cout << n * m << "\n";
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}