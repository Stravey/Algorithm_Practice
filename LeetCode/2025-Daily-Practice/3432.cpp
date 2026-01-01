#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(int num : nums) {
            sum += num;
        }
        return (sum % 2 == 0) ? nums.size() - 1 : 0;
    }
};
bool check()
{
    int n;
    bool flag = true;
    for(int i = 0;i < n;i++) {

    }
}
int main()
{
    return 0;
}