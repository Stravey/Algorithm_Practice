#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159;
int main()
{
    int r;
    cin >> r;
    double ans = (4 / 3.0) * pi * r * r * r;
    cout << "VOLUME = " << fixed << setprecision(3) << ans << endl;
    return 0;
}