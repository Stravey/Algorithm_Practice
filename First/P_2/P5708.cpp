#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double a,b,c,p;
double ans = 0;

int main()
{   
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    ans = pow(p * (p - a) * (p - b) * (p - c),0.5);
    cout << fixed << setprecision(1) << ans;
    return 0;
}