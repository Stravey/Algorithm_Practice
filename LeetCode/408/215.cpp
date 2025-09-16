#include <iostream>
#include <vector>
using namespace std;
// ��һ�ַ��� �������� return nums[k - 1]
// ƽ��ʱ�临�Ӷ�O(n)  �ռ临�Ӷ�O(1)
class Solution {
public:
    // ����˼��
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        bool mark = true;
        int ans = 0;
        while(mark) {
            int pivot = nums[left];
            int old_left = left;
            int old_right = right;
            // ����
            while(left < right) {
                while(left < right && nums[right] <= pivot) right--;
                if(left != right) {
                    nums[left] = nums[right];
                }
                while(left < right && nums[left] >= pivot) left++;
                if(left != right) {
                    nums[right] = nums[left];
                }
            }
            nums[left] = pivot;
            if(left == k - 1) {
                mark = false;
                ans = nums[left];
            } else if(left > k - 1) {
                right = right - 1;
                left = old_left;
            } else {
                left = left + 1;
                right = old_right;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}