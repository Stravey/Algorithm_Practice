#include <iosfwd>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            if(num < 6) continue;
            vector<int> a;
            for(int i = 1;i <= sqrt(num);i++) {
                if(num % i == 0) {
                    a.push_back(i);
                    if(i != num / i) {
                        a.push_back(num / i);
                    }
                    if(a.size() > 4) {
                        break;
                    }
                } 
            }
            if(a.size() == 4) {
                for(int aa : a) {
                    ans += aa;
                }
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}