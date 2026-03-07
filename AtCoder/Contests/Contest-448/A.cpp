#include <iostream>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    for(int i = 0;i < n;i++) {
        int a;
        cin >> a;
        if(a < x) {
            x = a;
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}