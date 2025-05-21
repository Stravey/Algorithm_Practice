#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a,b,c,ans,s;

int main()
{
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "No solution." << endl;
        return 0;
    }
    s = (a + b + c) * 0.5;
    ans = sqrt((s * (s - a) * (s - b) * (s - c)));
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}