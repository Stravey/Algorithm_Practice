#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<int> b(k);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < k; i++) cin >> b[i];
        
        long long ans = 0;
        int l = 0, r = n - 1;
    
        sort(a.begin(), a.end(), greater<long long>());
        sort(b.begin(), b.end());
        
        int pos = 0;
        for (int i = 0; i < k; i++) {
            if (b[i] == 1) {
                ans += a[pos];
                pos++;
            }
        }
        
        int j = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            if (b[i] == 1) continue;
            ans += a[pos];
            pos += b[i] - 1;
            ans += a[j];
            j--;
        }
        
        cout << ans << endl;
    }
    return 0;
}