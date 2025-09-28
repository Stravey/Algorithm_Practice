#include <iostream>
#include <vector>
#include <cstring>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> len(n);

    int cntEven[11] = {0};
    int cntOdd[11] = {0};

    for(int i = 0;i < n;i++) {
        cin >> a[i];
        len[i] = to_string(a[i]).length();
        int r = a[i] % 11;
        if(len[i] % 2 == 0) {
            cntEven[r]++;
        } else {
            cntOdd[r]++;
        }
    }

    ll ans = 0;

    for(int i = 0;i < n;i++) {
        int t = a[i] % 11;
        int L = len[i];

        if(L % 2 == 0) {
            int target_even = (11 - t) % 11;
            ans += cntEven[target_even];
            if (L % 2 == 0 && t == target_even) ans--;
            
            int target_odd = t;
            ans += cntOdd[target_odd];
            if (L % 2 == 1 && t == target_odd) ans--;
        } else {
            int target_even = (11 - t) % 11;
            ans += cntEven[target_even];
            if (L % 2 == 0 && t == target_even) ans--;
            
            int target_odd = t;
            ans += cntOdd[target_odd];
            if (L % 2 == 1 && t == target_odd) ans--;
        }
    }

    cout << ans << endl;
    return 0;
}