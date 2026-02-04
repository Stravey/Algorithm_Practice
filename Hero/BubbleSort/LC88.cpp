#include <iostream>
#include <vector>
using namespace std;
// 合并两个有序数组
class Solution {
    void bubbleSort(vector<int>& a) {
        int n = a.size();
        for(int i = n - 1;i >= 0;i--) {
            for(int j = 0;j < i;j++) {
                if(a[j] > a[j + 1]) {
                    swap(a[j],a[j + 1]);
                }
            }
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0;i < nums2.size();i++) {
            nums1[m + i] = nums2[i];
        }
        bubbleSort(nums1);
    }
};