#include <iostream>
using namespace std;
// 位运算实现两数相加
class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0) {
            int c = (unsigned int)(a & b) << 1;
            a ^= b;
            b = c;
        }
        return a;
    }
};
int main()
{
    return 0;
}