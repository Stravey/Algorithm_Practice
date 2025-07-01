#include <iostream>
#include <algorithm>
#define mod 1000000007
using namespace std;

int n,a[55];
long long ans = 1;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        ans *= (a[i] - i);
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}