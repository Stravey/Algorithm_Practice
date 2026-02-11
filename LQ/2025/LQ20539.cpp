#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll n, ans = 0;
    cin >> n;
    int x[n], y[n];
    for(int i = 0;i < n;i++) {
        cin >> x[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> y[i];
    }
    sort(x, x + n);
    sort(y, y + n);
    for(int i = 0;i < n;i++) {
        ans += abs(y[i] - x[i]);
    }
    cout << ans << endl;
    return 0;
}