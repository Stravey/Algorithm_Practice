#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int w,n,a[30005],ans = 0,l,r;
    cin >> w >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    l = 0,r = n - 1;
    while(l <= r) {
        if(a[l] + a[r] > w) {
            ans++;
            r--;
        } else {
            l++;
            r--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}