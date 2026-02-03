#include <iostream>
#include <vector>
using namespace std;
class Solution {
    void selectionSort(vector<int>& a) {
        int n = a.size();
        for(int i = 0;i < n;i++) {
            int minn = i;
            for(int j = i + 1;j < n;j++) {
                if(a[j] < a[minn]) {
                    minn = j;
                }
            }
            int tmp = a[minn];
            a[minn] = a[i];
            a[i] = tmp;
        }
    }
public:
    void sortColors(vector<int>& nums) {
        selectionSort(nums);
    }
};