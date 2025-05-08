#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double x;

int main()
{
    cin >> x;
    if(x >= 90) {
        cout << "4.0";
        return 0;
    } else if(x < 36) {
        cout << "0.0";
        return 0;
    } else if (x < 60) {
        x = floor(sqrt(x) * 10);
    }
    x = 4.0 - (90.0 - x) * 0.1;
    cout << fixed << setprecision(1) << x << endl;
    return 0;
}