#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;
    double tax = 0;
    if(x >= 0.00 && x <= 2000.00) {
        tax = 0;
        puts("Isento");
        return 0;
    } else if(x > 2000.00 && x <= 3000.00) {
        tax = (x - 2000.00) * 0.08;
    } else if(x > 3000.00 && x <= 4500.00) {
        tax = 80 + (x - 3000) * 0.18;
    } else {
        tax = 80 + 270 + (x - 4500.00) * 0.28;
    }
    cout << "R$ " << fixed << setprecision(2) << tax << endl; 
    return 0;
}