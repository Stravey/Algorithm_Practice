#include <iostream>
using namespace std;

void solve() {
    int n, m, d;
    cin >> n >> m >> d;
    int maxx = 1 + d / m;
    int ans = (n + maxx - 1) / maxx;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}