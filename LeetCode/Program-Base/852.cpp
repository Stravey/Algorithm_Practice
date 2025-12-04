#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 1,r = n - 2,ans = 0;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(arr[mid] > arr[mid + 1]) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}