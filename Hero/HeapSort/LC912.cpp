#include <iostream>
#include <vector>
#define eleType int
#define idType int
#define maxn 50005
using namespace std;
class Solution
{
    // 左孩子
    idType lson(idType idx) {
        return 2 * idx + 1;
    }
    // 右孩子
    idType rson(idType idx) {
        return 2 * idx + 2;
    }
    // 父亲
    idType parent(idType idx) {
        return (idx - 1) / 2;
    }
    // 大顶堆
    bool better(eleType a, eleType b) {
        return a > b;
    }
    // 下沉
    void Heapify(vector<int> &heap, int size, eleType curr) {
        idType lsonId = lson(curr);
        idType rsonId = rson(curr);
        idType optId = curr;
        if (lsonId < size && better(heap[lsonId], heap[optId])) {
            optId = lsonId;
        }
        if (rsonId < size && better(heap[rsonId], heap[optId])) {
            optId = rsonId;
        }
        if (optId != curr) {
            swap(heap[curr], heap[optId]);
            Heapify(heap, size, optId);
        }
    }
public:
    // 堆排序
    vector<int> sortArray(vector<int> &nums) {
        for (int i = nums.size() / 2; i >= 0; i--) {
            Heapify(nums, nums.size(), i);
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            swap(nums[0], nums[i]);
            Heapify(nums, i, 0);
        }
        return nums;
    }
};