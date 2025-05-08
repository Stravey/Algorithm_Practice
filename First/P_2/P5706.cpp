#include <iostream>
#include <iomanip>
using namespace std;

double t;
int n,cnt = 0;
double ans = 0;

int main()
{   
    cin >> t >> n;
    cnt = 2 * n;
    ans = t / n;
    cout << fixed << setprecision(3) << ans << endl;
    cout << cnt;
    return 0;
}