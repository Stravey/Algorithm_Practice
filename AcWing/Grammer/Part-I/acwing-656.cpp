#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;
    int n = x * 100;
    int a[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    puts("NOTAS:");
    for(int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", n / a[i], (double)a[i] / 100);
        n %= a[i];
    }
    puts("MOEDAS:");
    for(int i = 6; i < 12; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", n / a[i], (double)a[i] / 100);
        n %= a[i];
    }
    return 0;
}