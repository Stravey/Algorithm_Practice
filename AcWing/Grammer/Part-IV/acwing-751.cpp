#include <iostream>
#include <iomanip>
using namespace std;
double a[12][12];
int main()
{
    char c;
    cin >> c;
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
            // 找规律题
            if(i + j < 11 && i > j) {
                sum += a[i][j];
            }
        }
    }
    if(c == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 30.0 << endl;
    }
    return 0;
}