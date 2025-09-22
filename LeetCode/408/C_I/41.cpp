#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// ������
// ��ϣ��  �ռ临�Ӷ�O(n)  ʱ�临�Ӷ�O(n)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;
        for(int num : nums) {
            set.insert(num);
        }
        for(int i = 1;i <= n;i++) {
            if(set.find(i) == set.end()) {
                return i;
            }
        }
        return n + 1;
    }
};

// ���Ž� ԭ�ع�ϣ
// ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(1)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            while(nums[i] <= n && nums[i] >= 1 && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i],nums[nums[i] - 1]);
            }
        }
        for(int i = 0;i < n;i++) {
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};

int main()
{
    return 0;
}