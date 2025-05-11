#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double a[105],sum = 0,avg;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum * 1.0 / n;
    cout << fixed << setprecision(4) << avg << endl;
    return 0;
}
