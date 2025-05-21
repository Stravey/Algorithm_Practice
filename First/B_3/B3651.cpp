#include <iostream>
using namespace std;

long long n,k,a[1000001],ans = 0;

int main()
{
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    if(k >= 0 && k < n) {
        a[k] = -a[k];
    }
    for(int i = 1;i <= n;i++) {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}