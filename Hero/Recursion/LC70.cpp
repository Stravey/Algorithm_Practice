#include <iostream>
using namespace std;
// ÅÀÂ¥Ìİ
class Solution {
public:
    int climbStairs(int n) {
        int f[46];
        f[0] = 1;
        f[1] = 1;
        for(int i = 2;i <= n;i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
};
int main()
{
    return 0;
}