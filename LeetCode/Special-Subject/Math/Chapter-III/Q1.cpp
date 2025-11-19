#include <iostream>
#include <vector>
using namespace std;
// 排列顺序 需计算出全排列 并返回第 k 个全排列 模板
// 这个算法基于阶乘数制（Factorial Number System）的思想
// 每个排列可以唯一对应一个阶乘数制的表示第 k 个排列对应的阶乘数制表示就是算法中的 index 序列
class Solution {
    string getPermutation(int n, int k) {
        // 计算阶乘
        vector<int> factorial(n + 1,1);
        for(int i = 1;i <= n;i++) {
            factorial[i] = factorial[i - 1] * i;
        }
        // 数字列表
        vector<int> nums;
        for(int i = 1;i <= n;i++) {
            nums.push_back(i);
        }
        string ans;
        // 核心代码
        k--;
        for(int i = n;i >= 1;i--) {
            int index = k / factorial[i - 1];
            k %= factorial[i - 1];
            ans += to_string(nums[index]);
            nums.erase(nums.begin() + index);
        }
        return ans;
    }
};
int main()
{

    return 0;
}