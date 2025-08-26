// 4.寻找两个正序数组的中位数
// https://leetcode.cn/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=hEQM0XeA
#include <iostream>
#include <vector>
using namespace std;

int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {
    int m = nums1.size();
    int n = nums2.size();
    // 两个指针 分别指向nums1和nums2下标为0的元素
    int index_a = 0,index_b = 0;
        while(true) {
        // nums1无元素
        if(index_a == m) {
               return nums2[index_b + k - 1];
        }
        // nums2无元素
        if(index_b == n) {
              return nums1[index_a + k - 1];
        }
        // nums1和nums2长度为1 取两者最小
        if(k == 1) {
             return min(nums1[index_a],nums2[index_b]);
        }

        int newIndex_a = min(index_a + k / 2 - 1,m - 1);
        int newIndex_b = min(index_b + k / 2 - 1,n - 1);
        int pivot_a = nums1[newIndex_a];
        int pivot_b = nums2[newIndex_b];
        if(pivot_a <= pivot_b) {
            k -= newIndex_a - index_a + 1;
            index_a = newIndex_a + 1;
        } else {
            k -= newIndex_b - index_b + 1;
            index_b = newIndex_b + 1;
        }
    }
}
double findMedianSortedArrays_1(vector<int>& nums1, vector<int>& nums2) {
    int totalLength = nums1.size() + nums2.size();
    if(totalLength % 2 == 1) {
        return getKthElement(nums1,nums2,(totalLength + 1) / 2);
    } else {
        return (getKthElement(nums1,nums2,totalLength / 2) + getKthElement(nums1,nums2,totalLength / 2 + 1)) / 2.0;
    }
}

// 另一种写法
double findMedianSortedArrays_2(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    int len = (m + n) / 2;
    int first, second;
    int i = 0, j = 0;
    for(int t = 0; t < len + 1; ++t){
        first = second;
        if(j >= n || (i < m && nums1[i] < nums2[j])){
            second = nums1[i];
            ++i;
        }else{
            second = nums2[j];
            ++j;
        }
    }
    if((m + n) & 1){
        return second;
    }else{
        return (first + second) / 2.0;
    }
}

int main() 
{

    return 0;
}