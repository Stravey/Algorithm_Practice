#include <iostream>
#include <vector>
using namespace std;
// 链表排序
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    ListNode* mergeSort(ListNode* a, ListNode* b) {
        a = sortList(a);
        b = sortList(b);
        // 虚拟头节点
        ListNode* head = new ListNode();
        ListNode* tail = head;
        while(a || b) {
            if(a == nullptr) {
                tail -> next = b;
                break;
            } else if(b == nullptr) {
                tail -> next = a;
                break;
            } else if(a -> val < b -> val) {
                tail -> next = a;
                a = a -> next;
            } else {
                tail -> next = b;
                b = b -> next;
            }
            tail = tail -> next;
            tail -> next = nullptr;
        }
        return head -> next;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr) {
            return nullptr;
        } else if(head -> next == nullptr) {
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        while(fast) {
            prev = slow;
            slow = slow -> next;
            fast = fast -> next;
            if(fast) {
                fast = fast -> next;
            }
        }
        prev -> next = nullptr;
        return mergeSort(head, slow);
    }
};

