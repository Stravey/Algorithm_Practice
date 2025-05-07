#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x,ans = 0;
    cin >> x;
    if(x >= 0 && x < 5) {
        cout << fixed << setprecision(3) << -x + 2.5 << endl;
    } else if(x >= 5 && x < 10) {
        cout << fixed << setprecision(3) << 2 - 1.5 * (x - 3) * (x - 3) << endl;
    } else if(x >= 10 && x < 20) {
        cout << fixed << setprecision(3) << x / 2 - 1.5 << endl;
    }
    return 0;
}