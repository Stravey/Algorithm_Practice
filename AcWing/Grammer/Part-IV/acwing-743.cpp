#include <iostream>
#include <iomanip>
using namespace std;
double a[20][20];
int main()
{
    int L;
    cin >> L;
    char c;
    cin >> c;
    double ans = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 12; i++) {
        ans += a[L][i];
    }
    if(c == 'S') {
        cout << fixed << setprecision(1) << ans << endl;
    } else {
        cout << fixed << setprecision(1) << ans / 12.0 << endl;   
    }
    return 0;
}