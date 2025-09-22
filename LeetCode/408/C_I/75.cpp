#include <bits/stdc++.h>
using namespace std;
// 方法一 计数法
// O(n) O(1)
void sortColors(vector<int>& nums) {
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for(int i = 0;i < nums.size() - 1;i++) {
        if(nums[i] == 0) {
            count_0++;
        } else if(nums[i] == 1) {
            count_1++;
        } else {
            count_2++;
        }
    }
    int cnt = 0;
    while(count_0--) {
        nums[cnt++] = 0;
    }
    while(count_1--) {
        nums[cnt++] = 1;
    }
    while(count_2--) {
        nums[cnt++] = 2;
    }
}
// 方法二 
// 三向切分快速排序/迪捷斯塔拉/荷兰旗问题 洛谷P3392
// O(n) O(1)
void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main() 
{
    cout << "Hello World!" << endl;
    return 0;
}
