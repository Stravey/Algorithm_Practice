#include <iostream>
#include <vector>
using namespace std;
// 自除数 可以被它包含的每一位数整除的数 
class Solution {
public: 
    bool check(int n) {
        int tmp = n;
        while(tmp > 0) {
            int digit = tmp % 10;
            if(digit == 0 || n % digit != 0) {
                return false;
            }
            tmp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for(int i = left;i <= right;i++) {
            if(check(i)) {
                a.push_back(i);
            }
        }
        return a;
    }
};
int main()
{
    return 0;
}