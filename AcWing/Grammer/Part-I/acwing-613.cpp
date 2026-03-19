#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << 1 / 2.0 * a * c << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << pi * c * c << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << 1 / 2.0 * (a + b) * c << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << b * b << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << a * b << endl;
    return 0;
}