#include <iostream>
#include <vector>
using namespace std;
// 存在重复元素 排序后重复元素必相邻
class Solution {
    int Partition(vector<int>& a, int l, int r) {
        int idx = l + rand() % (r - l + 1);
        swap(a[l],a[idx]);
        int i = l, j = r;
        int x = a[i];
        while(i < j) {
            while(i < j && a[j] > x) {
                j--;
            }
            if(i < j) {
                swap(a[i], a[j]);
                i++;
            }
            while(i < j && a[i] < x) {
                i++;
            }
            if(i < j) {
                swap(a[i], a[j]);
                j--;
            }
        }
        return i;
    }
    void QuickSort(vector<int>& a, int l, int r) {
        if(l >= r) {
            return;
        }
        int pivot = Partition(a, l, r);
        QuickSort(a, l, pivot - 1);
        QuickSort(a, pivot + 1, r);
    }
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        QuickSort(nums, 0, n -1);
        for(int i = 1;i < n;i++) {
            if(nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};