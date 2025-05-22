#include <iostream>
using namespace std;

int x,y,ans = 0;

int main()
{
    cin >> x >> y;
    if(x > y) {
        ans = y * 90 + (x - y) * 60;
    } else if(x < y) {
        ans = x * 90 + (y - x) * 40;
    } else {
        ans = 90 * x;
    }
    cout << ans << endl;
    return 0;
}