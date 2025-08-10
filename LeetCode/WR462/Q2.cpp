#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortPermutation(vector<int> &nums)
{
    int n = nums.size();
    bool sorted = true;
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        return 0;
    }
    int ans = 0;
    for (int bit = 20; bit >= 0; bit--) {
        int test = ans | (1 << bit);
        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] == i) {
                continue;
            }
            bool num_has = (nums[i] & test) == test;
            bool idx_has = (i & test) == test;
            if (num_has && idx_has) {
                continue;
            }
            else if (!num_has && !idx_has) {
                valid = false;
                break;
            }
            else {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans = test;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {0,2,3,1};
    cout << sortPermutation(nums) << endl; // Ê¾ÀýÊä³ö
    return 0;
}