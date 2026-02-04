#include <iostream>
#include <vector>
using namespace std;
// ÔªËØ¼ÆÊý
class Solution {
    void bubbleSort(vector<int>& a) {
        int n = a.size();
        for(int i = n - 1;i >= 0;i--) {
            for(int j = 0;j < i;j++) {
                if(a[j] > a[j + 1]) {
                    swap(a[j],a[j + 1]);
                }
            } 
        }
    }
public:
    int countElements(vector<int>& nums) {
        bubbleSort(nums);
        int cnt = 0;
        for(int i = 1;i < nums.size() - 1;i++) {
            if(nums[i] != nums[0] && nums[i] != nums.back()) {
                cnt++;
            }
        }
        return cnt;
    }
};