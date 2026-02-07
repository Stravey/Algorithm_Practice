#include <iostream>
#include <vector>
using namespace std;
// 多数元素
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
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        QuickSort(nums, 0, n - 1);
        return nums[n / 2];
    }
};