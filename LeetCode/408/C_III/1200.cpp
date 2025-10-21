#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        int best = INT_MAX;
        for(int i = 0;i < n - 1;i++) {
            if(int d  = arr[i + 1] - arr[i];d < best) {
                best = d;
                ans = {{arr[i],arr[i + 1]}};
            } else if(d == best) {
                ans.emplace_back(initializer_list<int>{arr[i],arr[i + 1]});
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}