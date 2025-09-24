#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> heap(n + 1);
        // 赋值
        for(int i = 0;i < n;i++) {
            heap[i + 1] = nums[i];
        }
        // 初始化堆
        for(int i = n / 2;i >= 1;i--) {
            down(heap,i,n);
        }
        int ans = 0;
        // 删除k次
        while(k--) {
            ans = heap[1];
            swap(heap[1],heap[n]);
            n--;
            down(heap,1,n);
        }
        return ans;
    }
    void down(vector<int> &heap,int i,int n) {
        int u = i;
        if(2 * i <= n && heap[u] < heap[2 * i]) {
            u = 2 * i;
        }
        if(2 * i + 1 <= n && heap[u] < heap[2 * i + 1]) {
            u = 2 * i + 1;
        }
        if(i != u) {
            swap(heap[i],heap[u]);
            down(heap,u,n);
        }
    }
};
int main()
{
    return 0;
}