#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int T = 1;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    a.push_back(1);
    a.push_back(2);
    while(true) {
        ll next = a.back() + a[a.size() - 2];
        if(next > n) {
            break;
        }
        a.push_back(next);
    }
    bool flag = false;
    for(ll b : a) {
        if(b == n) {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
}
signed main() {
    // cin >> T;
    while(T--) {
        solve();
    }
}