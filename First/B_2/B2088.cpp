#include <iostream>
#include <iomanip>
using namespace std;

double a[10],ans = 0;
double b[10] = {28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};

int main()
{
    for(int i = 0; i <= 9; i++) {
        cin >> a[i];
    }
    for(int j = 0;j <= 9;j++) {
        ans += a[j] * b[j];
    }
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}