#include <bits/stdc++.h>
using namespace std;
double a[15][15];
int main()
{
    int L;
    cin >> L;
    char c;
    cin >> c;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        sum += a[i][L];
    }
    if(c == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }
    return 0;
}