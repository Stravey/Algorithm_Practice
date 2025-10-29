#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int cnt = 0;
        for(int num : nums) {
            if(cnt == 0) {
                candidate = num;
            } 
            if(num == candidate) {
                cnt++;
            } else {
                cnt--;
            }
        }
        cnt = 0;
        int len = nums.size();
        for(int num : nums) {
            if(num == candidate) {
                cnt++;
            }
        }
        return cnt * 2 > len ? candidate : -1;
    }
};
int main()
{
    return 0;
}