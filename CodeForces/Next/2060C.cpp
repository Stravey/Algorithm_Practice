#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i < n;i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans = 0;
        int left = 0,right = n - 1;
        while(left < right) {
            int sum = v[left] + v[right];
            if(sum == k) {
                ans += 1;
                left++;
                right--;
            } else if(sum > k) {
                right--;  
            } else {
                left++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}