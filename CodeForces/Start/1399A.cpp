#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            int num;
            cin >> num;
            cout << "YES" << endl;
            continue;
        }
        
        vector<int> a(n);
        unordered_set<int> unique_vals;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            unique_vals.insert(a[i]);
        }
        
        if (unique_vals.size() > 2) {
            cout << "NO" << endl;
        } else {
            vector<int> vals(unique_vals.begin(), unique_vals.end());
            int min_val = vals[0];
            int max_val = vals[0];
            
            for (int val : vals) {
                if (val < min_val) min_val = val;
                if (val > max_val) max_val = val;
            }
            
            if (max_val - min_val <= 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}