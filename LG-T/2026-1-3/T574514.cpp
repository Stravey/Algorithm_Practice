#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

void dfs(int pos, int last, int len, int total, int k, 
         const vector<int>& a, vector<int>& cnt, long long& ans) {
    if (pos == total) {
        ans = (ans + 1) % MOD;
        return;
    }
    for (int i = 0; i < a.size(); i++) {
        if (cnt[i] < a[i]) {
            if (i == last) {
                if (len + 1 < k) {  
                    cnt[i]++;
                    dfs(pos + 1, i, len + 1, total, k, a, cnt, ans);
                    cnt[i]--;
                }
            } else {
                cnt[i]++;
                dfs(pos + 1, i, 1, total, k, a, cnt, ans);
                cnt[i]--;
            }
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    
    if (k == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] > 1) {
                cout << 0 << endl;
                return 0;
            }
        }
        long long ans = 1;
        for (int i = 2; i <= total; i++) {
            ans = ans * i % MOD;
        }
        cout << ans << endl;
        return 0;
    }
    
    if (total <= 15) {  
        vector<int> cnt(n, 0);
        long long ans = 0;
        dfs(0, -1, 0, total, k, a, cnt, ans);
        cout << ans << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}