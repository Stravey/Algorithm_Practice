#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        // ��ʼ����������
        for(int i = 0;i < k;i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        // ��������
        for(int i = k;i < n;i++) {
            // ��ȥ��߳�ȥ��Ԫ�أ������ұ��½����Ԫ��
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(sum,maxSum);
        }
        return (double)maxSum / k;
    }
};
int main()
{
    return 0;
}