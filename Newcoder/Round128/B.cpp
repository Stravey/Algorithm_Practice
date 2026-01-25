#include <iostream>
using namespace std;
int T = 1;
inline void solve() {
    int x_a,y_a,x_b,y_b,x_c,y_c;
    cin >> x_a >> y_a >> x_b >> y_b >> x_c >> y_c;
    if(2 * x_a == (x_b + x_c) && 2 * y_a == (y_b + y_c)) {
        cout << 1 << endl;
    } else if (2 * x_b == (x_a + x_c) && 2 * y_b == (y_a + y_c)) {
        cout << 2 << endl;
    } else if (2 * x_c == (x_b + x_a) && 2 * y_c == (y_b + y_a)) {
        cout << 3 << endl;
    }
}
int main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}