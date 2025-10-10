#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> left_min(n), right_max(n);
        
        left_min[0] = a[0];
        for (int i = 1; i < n; i++) {
            left_min[i] = min(left_min[i-1], a[i]);
        }
        
        right_max[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            right_max[i] = max(right_max[i+1], a[i]);
        }
        
        string ans(n, '0');
        for (int i = 0; i < n; i++) {
            if (a[i] == left_min[i] || a[i] == right_max[i]) {
                ans[i] = '1';
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}