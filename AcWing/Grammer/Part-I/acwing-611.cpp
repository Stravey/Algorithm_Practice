#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sum = 0;
    for(int i = 0; i < 2; i++) {
        int a, b;
        double c;
        cin >> a >> b >> c;
        sum += (b * c);
    }
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << sum << endl;
    return 0;
}