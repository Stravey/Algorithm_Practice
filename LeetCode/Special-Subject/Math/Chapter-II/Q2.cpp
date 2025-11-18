#include <iostream>
#include <vector>
using namespace std;
// 被 k 整除的、仅包含数字 1 的最小正整数 n 的长度
class Solution{
public:
    int smallestRepUnitDivByK(int k) {
        if(k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        int mark = 1 % k;
        int len = 1;
        while(mark > 0) {
            mark = (mark * 10 + 1) % k;
            len++;
        }
        return len;
    }
};
int main()
{
    return 0;
}