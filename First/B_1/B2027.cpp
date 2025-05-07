#include <iostream>
#include <iomanip>
#define pi 3.14
using namespace std;

double r,ans = 0;

int main()
{
    cin >> r;
    ans = (4.0 / 3) * pi * r * r * r;
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}