#include <iostream>
#include <vector>
using namespace std;
// 归并排序模板
void merge(vector<int>& a, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int temp[n1 + n2];
    for(int i = 0;i < n1;i++) {
        temp[i] = a[l + i];
    }
    for(int j = 0;j < n2;j++) {
        temp[n1 + j] = a[m + 1 + j];
    }
    int i = 0,j = n1,k = l;
    while(i < n1 && j < n1 + n2) {
        if(temp[i] <= temp[j]) {
            a[k++] = temp[i++];
        } else {
            a[k++] = temp[j++];
        }
    }
    while(i < n1) {
        a[k++] = temp[i++];   
    }
    while(j < n1 + n2) {
        a[k++] = temp[j++];
    }
}
void mergeSort(vector<int>& a, int l, int r) {
    if(l >= r) {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
}
void test() {
    vector<int> a = {2,3,6,4,1,0,8,5};
    mergeSort(a, 0, a.size() - 1);
    for(int i = 0;i < a.size();i++) {
        cout << a[i] << " ";
    }
}
int main()
{
    test();
    return 0;
}
