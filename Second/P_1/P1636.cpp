#include <bits/stdc++.h>
using namespace std;

int a[100005],b[100005],ans = 0;

int main()
{
    int n,k;
    cin >> n >> k;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n - 1;i++) {
        b[i] = a[i + 1] - a[i];
    }
    sort(b,b + n);
    for(int i = 0;i <= k;i++) {
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}