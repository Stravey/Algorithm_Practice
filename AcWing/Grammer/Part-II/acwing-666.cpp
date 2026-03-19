#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double sides[3] = {a, b, c};
    sort(sides, sides + 3, greater<double>());
    a = sides[0];
    b = sides[1];
    c = sides[2];

    if (a >= b + c) { 
        puts("NAO FORMA TRIANGULO");
    } else {
        if (a * a == b * b + c * c) {
            puts("TRIANGULO RETANGULO");
        } else if (a * a > b * b + c * c) {
            puts("TRIANGULO OBTUSANGULO");
        } else {
            puts("TRIANGULO ACUTANGULO");
        }

        if (a == b && b == c) {
            puts("TRIANGULO EQUILATERO");
        } else if (a == b || b == c || a == c) { // 任意两边相等
            puts("TRIANGULO ISOSCELES");
        }
    }
    return 0;
}