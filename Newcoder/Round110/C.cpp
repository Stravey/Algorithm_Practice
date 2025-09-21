#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
// 通过率75%

// 寻找数组中第一个非负整数的值
int MEX(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> set;
    for(int num : nums) {
        if(num >= 0) {
            set.insert(num);
        }
    }
    int mex = 0;
    while(set.find(mex) != set.end()) {
        mex++;
    }
    return mex;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        
        int ans = -1e9;
        for(int l = 0;l < n;l++) {
            unordered_set<int> us;
            int cur = a[l];
            for(int r = l + 1;r < n;r++) {
                cur = max(cur,a[r]);
                if(a[r] >= 0) {
                    us.insert(a[r]);
                }
                int mex = 0;
                while(us.find(mex) != us.end()) {
                    mex++;
                }
                ans = max(ans,cur - mex);
            }
        }
        cout << ans << endl;
    }
    return 0;
}