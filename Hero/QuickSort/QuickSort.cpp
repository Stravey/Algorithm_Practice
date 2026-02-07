#include <iostream>
#include <vector>
using namespace std;
// 快速排序模板
// 寻找枢轴函数
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
// 快排主函数
void QuickSort(vector<int>& a, int l, int r) {
    if(l >= r) {
        return;
    }
    int pivot = Partition(a, l ,r);
    QuickSort(a, l, pivot - 1);
    QuickSort(a, pivot + 1, r);
}                                   
         