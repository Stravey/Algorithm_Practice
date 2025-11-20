#include <iostream>
using namespace std;
// 转化为 5 的质因子个数 (给定一个整数 n ，返回 n! 结果中尾随零的数量)
class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        for(int i = 5;i <= n;i += 5) {
            for(int j = i;j % 5 == 0;j /= 5) {
                ans++;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}