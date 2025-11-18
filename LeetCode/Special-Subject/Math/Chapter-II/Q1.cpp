#include <iostream>
#include <vector>
using namespace std;
// 丑数 只包含质因数为2 3 5的正整数
class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) {
            return false;
        }
        vector<int> a = {2,3,5};
        for(int x : a) {
            while(n % x == 0) {
                n /= x;
            }
        }
        return n == 1;
    }
};
int main()
{
    return 0;
}