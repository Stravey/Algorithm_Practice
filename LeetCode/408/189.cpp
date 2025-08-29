#include <bits/stdc++.h>
using namespace std;
// ��һ�ַ���
// ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(n)
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> v = nums;
    for(int i = 0;i < n;i++) {
        nums[(i + k) % n] = v[i];
    }
}
// �ڶ��ַ��� ���Ž�
// ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(1)
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