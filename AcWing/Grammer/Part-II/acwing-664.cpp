#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, ans = 0;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
        ans = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << ans << endl;
    } else {
        ans = (a + b) * c / 2.0;
        cout << "Area = " << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}