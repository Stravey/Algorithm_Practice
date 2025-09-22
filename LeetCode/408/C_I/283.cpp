#include <iostream>
#include <vector>
using namespace std;
// 移动零
// 最优解 双指针
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int l = 0;
    int r = 0;
    while(l < n && nums[l] != 0) l++;
    while(r < n && nums[r] == 0) r++;
    for(int i = l,j = r;j < n;j++) {
        if(nums[j] != 0 && j > i) {
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}