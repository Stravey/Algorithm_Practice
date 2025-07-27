#include <iostream>
using namespace std;

// ¶þ·Ö²éÕÒ

long long n,m,a[1000005];

bool check(long long s) {
    long long total = s * m;
    for(int i = 0;i < n;i++) {
        if(a[i] <= s) {
            total -= (s - a[i] + 1);
            if(total < 0) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    long long l = 0,r = 1e18,ans = 0;
    while(l <= r) {
        long long mid = (l + r) / 2;
        if(check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}