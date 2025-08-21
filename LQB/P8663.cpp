// P8663 [¿∂«≈±≠ 2018  ° A] ±∂ ˝Œ Ã‚
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<vector<int>> v(k);
    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;
        int r = x % k;
        v[r].push_back(x);
    }
    for(int i = 0;i < k;i++) {
        // Ωµ–Ú≈≈–Ú ƒ¨»œ π”√less<int> () …˝–Ú≈≈–Ú
        sort(v[i].begin(),v[i].end(),greater<int>());
        if(v[i].size() > 3) {
            v[i].resize(3);
        }
    }
    long long ans = 0;
    for(int i = 0;i < k;i++) {
        for(int j = 0;j < k;j++) {
            int t = (k - i - j) % k;
            if(t < 0) {
                t += k;
            }
            if(v[i].empty() || v[j].empty() || v[t].empty()) {
                continue;
            }
            for(int a : v[i]) {
                for(int b : v[j]) {
                    if(i == j && a == b && count(v[i].begin(),v[i].end(),a) < 2) {
                        continue;
                    }
                    for(int c : v[t]) {
                        if(i == j && j == t) {
                            if(a == b && b == c && count(v[i].begin(),v[i].end(),a) < 3) {
                                continue;
                            } else if((a == b || a == c || b == c) && count(v[i].begin(), v[i].end(), a) < 2) {
                                continue;
                            }
                        } else if(i == t) {
                            if(a == c && count(v[i].begin(),v[i].end(),a) < 2) {
                                continue;
                            }
                        } else if(j == t) {
                            if (b == c && count(v[j].begin(), v[j].end(), b) < 2) {
                                continue;
                            }
                        }
                        long long sum = a + b + c;
                        if(sum % k == 0 && sum > ans) {
                            ans = sum;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}