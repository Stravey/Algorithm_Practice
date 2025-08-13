// T566862 Ã‘Ã≠£®Easy ver.£©
#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long x, y, a, b, c, d;
        cin >> x >> y >> a >> b >> c >> d;
        if (x == y) {
            cout << 0 << endl;
            continue;
        }
        bool g = true;
        for (int i = 0; i < 30; ++i) {
            int xb = (x >> i) & 1;
            int yb = (y >> i) & 1;
            if (xb == yb) continue;
            if (yb == 1) {
                if (!((b >> i) & 1)) {
                    g = false;
                    break;
                }
            } else {
                if ((a >> i) & 1) {
                    g = false;
                    break;
                }
            }
        } 
        if (!g) {
            cout << -1 << endl;
            continue;
        }
        long long min_cost = LLONG_MAX;
        long long temp;
        // AND
        if ((x & a) == y) min_cost = c;
        // OR
        if ((x | b) == y) min_cost = min(min_cost, d);
        long long combined = c + d;
        if (((x & a) | b) == y || ((x | b) & a) == y) {
            min_cost = min(min_cost, combined);
        }
        cout << min_cost << endl;
    }
    return 0;
}