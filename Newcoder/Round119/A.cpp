#include <iostream>
#include <vector>
using namespace std;
int T = 1;
void solve() {
    int x,y,p1,p2;
    cin >> x >> y >> p1 >> p2;
    if((x > y) || (x == y && p1 < p2)) {
        cout << "A" << endl;
    } else if((x < y) || (x == y && p1 > p2)) {
        cout << "B" << endl; 
    } else {
        cout << "C" << endl;
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