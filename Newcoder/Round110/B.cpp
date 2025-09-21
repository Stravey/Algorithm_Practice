#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// AC
int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<int> v;
        int left = 0;
        int right = n - 1;
        bool flag = true;
        while(left <= right) {
            if(flag) {
                v.push_back(a[left++]);
            } else {
                v.push_back(a[right--]);
            }
            flag = false;
        }
        long long ans = 0;
        for(int i = 0;i < n - 1;i++) {
            ans += v[i] + v[i + 1];
        }
        cout << ans << endl;
    }
    return 0;
}