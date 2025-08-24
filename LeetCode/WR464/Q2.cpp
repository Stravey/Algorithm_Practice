// Q2. 数组元素分组
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
bool partitionArray(vector<int> nums, int k) {
    unordered_map<int,int> m;
    for(int num : nums) {
        m[num]++;
    }
    int total = nums.size();
    if(total % k != 0) {
        return false;
    }
    int group = total / k;
    for(auto& pair : m) {
        if(pair.second > group) {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int k = 2;
    cout << boolalpha <<  partitionArray(nums,k) << endl;
    return 0;
}