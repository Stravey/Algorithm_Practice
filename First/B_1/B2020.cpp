#include <iostream>
using namespace std;

int sum,a[6];

int main()
{
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];

    sum += a[1] % 3;
    a[1] /= 3;
    a[5] += a[1];
    a[2] += a[1];

    sum += a[2] % 3;
    a[2] /= 3;
    a[3] += a[2];
    a[1] += a[2];

    sum += a[3] % 3;
    a[3] /= 3;
    a[4] += a[3];
    a[2] += a[3];

    sum += a[4] % 3;
    a[4] /= 3;
    a[5] += a[4];
    a[3] += a[4];

    sum += a[5] % 3;
    a[5] /= 3;
    a[1] += a[5];
    a[4] += a[5];

    cout << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
    cout << sum;
    return 0;
}