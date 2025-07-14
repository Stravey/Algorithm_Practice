#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n,x,ans = 0,l,r;
    cin >> n >> x >> l;
    if(l > x) {
        ans += l - x;
        l = x;
    }
    for(int i = 2;i <= n;i++) {
        cin >> r;
        if(l + r > x) {
            ans += l + r - x;
            r = x - l;
        }
        l = r;
    }
    cout << ans << endl;
    return 0;
}