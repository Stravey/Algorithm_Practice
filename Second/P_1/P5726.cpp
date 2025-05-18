#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int a[1005],n,sum = 0;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 1;i < n - 1;i++) {
        sum += a[i];
    }
    cout << fixed << setprecision(2) << sum * 1.0 / (n - 2) << endl;
    return 0;
}