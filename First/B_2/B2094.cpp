#include <iostream>
#include <algorithm>
using namespace std;

int n,a[105],ans = 0;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    for(int i = 0;a[i] != a[n];i++) {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}