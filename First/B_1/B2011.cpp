#include <iostream>
#include <iomanip>
using namespace std;

double a,b;
double ans = 0;

int main()
{
    cin >> a >> b;
    ans = a / b;
    cout << fixed << setprecision(9) << ans << endl;
    return 0;
}