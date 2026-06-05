#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = 0;
    if(y % x == 0) {
        ans = y / x;
    } else {
        ans = y / x + 1;
    }
    cout << ans << endl;
    return 0;
}