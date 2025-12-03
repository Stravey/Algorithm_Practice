#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n < 0) {
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