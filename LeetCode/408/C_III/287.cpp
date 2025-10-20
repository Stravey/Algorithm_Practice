#include <iostream>
#include <vector>
using namespace std;
// ����ָ�뷨 �ж��ظ����� �������ж������Ƿ���ڻ�
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0,fast = 0;
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);
        slow = 0;
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
int main()
{
    return 0;
}