#include <bits/stdc++.h>
using namespace std;
double a[15][15];
int main()
{
    int cnt = 0;
    char c;
    cin >> c;
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
            if(i + j > 11 && i < j) {
                sum += a[i][j];
                cnt++;
            }
        }
    }
    if(c == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / cnt << endl;
    }
    return 0;
}