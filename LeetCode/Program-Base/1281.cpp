#include <iostream>
using namespace std;
using ll = long long;
class Solution {
public:
    int subtractProductAndSum(int n) {
        ll ans = 1;
        ll sum = 0;
        while(n != 0) {
            int digit = n % 10;
            ans *= digit;
            sum += digit;
            n /= 10;
        }
        return ans - sum;
    }
};
int main() 
{
    return 0;
}