#include <iostream>
#include <vector>
using namespace std;
// 寻找范围内距离最小的相邻质数对
class Solution {
    bool check(int x) {
        if(x < 2) return false;
        if(x == 2) return true;
        if(x % 2 == 0) return false;
        for(int i = 3;i * i <= x ;i += 2) {
            if(x % i == 0) {
                return false;
            } 
        }
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> isPrimes;
        for(int i = left;i <= right;i++) {
            if(check(i)) {
                isPrimes.push_back(i);
            }
        }
        if(isPrimes.size() < 2) {
            return {-1,-1};
        }
        int minDis = INT_MAX;
        vector<int> ans = {-1,-1};
        for(int i = 1;i < isPrimes.size();i++) {
            int minn = isPrimes[i] - isPrimes[i - 1];
            if(minn < minDis) {
                minDis = minn;
                ans = {isPrimes[i - 1],isPrimes[i]};
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}