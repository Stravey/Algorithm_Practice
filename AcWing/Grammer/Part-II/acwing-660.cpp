#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double ans = 0;
    if(x == 1) {
        ans = y * 4.00;
    } else if(x == 2) {
        ans = y * 4.50;
    } else if(x == 3) {
        ans = y * 5.00;
    } else if(x == 4) {
        ans = y * 2.00;
    } else if(x == 5) {
        ans = y * 1.50;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << ans << endl;
    return 0;
}