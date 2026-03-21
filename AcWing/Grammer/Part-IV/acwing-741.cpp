#include <iostream>
#define int long long
using namespace std;
int a[100];
signed main()
{
    int t, i = 0;
    cin >> t;
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for(i = 3; i <= 60; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    while(t--) {
        int n;
        cin >> n;
        cout << "Fib(" << n << ") = " << a[n] << endl;
    }
    return 0;
}