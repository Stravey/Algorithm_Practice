#include <iostream>
#include <vector>
using namespace std;
// 删除某些元素的数组均值
class Solution {
    void insertionSort(vector<int>& a) {
        for(int i = 1;i < a.size();i++) {
            int x = a[i];
            int j;
            for(j = i - 1;j >= 0;j--) {
                if(x < a[j]) {
                    a[j + 1] = a[j];
                } else {
                    break;
                }
            }
            a[j + 1] = x;
        }
    }
public:
    double trimMean(vector<int>& arr) {
        insertionSort(arr);
        int n = arr.size();
        double sum = 0;
        int cnt = 0;
        for(int i = n / 20;i < n - n / 20;i++) {
            sum += arr[i];
            cnt++;
        }
        return sum / cnt;
    }
};   
