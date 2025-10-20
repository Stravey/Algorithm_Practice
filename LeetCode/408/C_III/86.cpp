#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        // 创建两个链表 一个连接小于x的值  一个连接大于x的值
        // 由于是链表 因此空间复杂度为O(1)
        ListNode* small = new ListNode(0);
        ListNode* smallHead=  small;
        ListNode* large = new ListNode(0);
        ListNode* largeHead = large;
        while(head != nullptr) {
            if(head -> val < x) {
                small -> next = head;
                small = small -> next;
            } else {
                large -> next = head;
                large = large -> next;
            }
            head = head -> next;
        }
        large -> next = nullptr;
        small -> next = largeHead -> next;
        return smallHead -> next;
    }
};
int main()
{
    return 0;
}