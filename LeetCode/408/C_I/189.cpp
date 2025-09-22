#include <bits/stdc++.h>
using namespace std;
// 第一种方法
// 时间复杂度O(n) 空间复杂度O(n)
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> v = nums;
    for(int i = 0;i < n;i++) {
        nums[(i + k) % n] = v[i];
    }
}
// 第二种方法 最优解
// 时间复杂度O(n) 空间复杂度O(1)
void reverse(vector<int>& a,int l,int r) {
    for(int i = l,j = r;i < j;i++,j--) {
        swap(a[i],a[j]);
    }
}
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums,0,n - 1);
    reverse(nums,0,k - 1);
    reverse(nums,k,n - 1);
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}