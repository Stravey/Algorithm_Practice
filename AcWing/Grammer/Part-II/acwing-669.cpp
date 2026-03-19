#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    cin >> x;
    double new_x = 0, change = 0;
    int percentage = 0;
    if(x >= 0 && x <= 400) {
        new_x = x * (1 + 0.15);
        change = x * 0.15;
        percentage = 15;
    } else if(x > 400 && x <= 800) {
        new_x = x * (1 + 0.12);
        change = x * 0.12;
        percentage = 12;
    } else if(x > 800 && x <= 1200) {
        new_x = x * (1 + 0.10);
        change = x * 0.10;
        percentage = 10;
    } else if(x > 1200 && x <= 2000) {
        new_x = x * (1 + 0.07);
        change = x * 0.07;
        percentage = 7;
    } else {
        new_x = x * (1 + 0.04);
        change = x * 0.04;
        percentage = 4;
    }
    cout << "Novo salario: " << fixed << setprecision(2) << new_x << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << change << endl;
    cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    return 0;
}