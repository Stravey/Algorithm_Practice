#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double x;
    cin >> x >> n;
    for(int i = 0;i < n;i++) {
        x += x / 1000.0;
    }
    cout << fixed << setprecision(4) << x << endl;
    return 0;
}