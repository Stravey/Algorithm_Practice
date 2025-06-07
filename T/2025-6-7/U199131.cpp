#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n,q,t;

int main()
{
    cin >> n >> q;
    vector<ll> d(n);
    for(int i = 0;i < n;i++) {
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    
    // Ç°×ººÍ
    vector<ll> a(n + 1,0);
    for(int i = 1;i <= n;i++) {
        a[i] = a[i - 1] + i * d[i - 1];
    }

    while(q--) {
        cin >> t;

        int left = 0;
        int right = n;
        ll ans = 0;
    
        while(left <= right) {
            int mid = (left + right) / 2;
            if(a[mid] <= t) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}