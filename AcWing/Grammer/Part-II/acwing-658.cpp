#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(b * b - 4 * a * c < 0 || a == 0) {
        puts("Impossivel calcular");
        return 0;
    }
    double m = sqrt(b * b - 4 * a * c);
    double x1 = (-b + m) / (2 * a);
    double x2 = (-b - m) / (2 * a);
    cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    return 0;
}