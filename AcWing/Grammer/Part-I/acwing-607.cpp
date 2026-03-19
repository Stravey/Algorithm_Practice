#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double avg = (a * 2 + b * 3 + c * 5) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << avg << endl;
    return 0;
}