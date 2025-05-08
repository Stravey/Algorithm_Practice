#include <iostream>
#include <iomanip>
using namespace std;

double m,h,ans;

int main()
{
    cin >> m >> h;
    int precision = 4;
    ans = (m / (h * h));
    if(ans < 18.5) {
        cout << "Underweight";
    } else if(ans >= 18.5 && ans < 24) {
        cout << "Normal"; 
    } else {
        cout << fixed << setprecision(precision) << ans << endl;
        cout << "Overweight";
    }
    return 0;
}