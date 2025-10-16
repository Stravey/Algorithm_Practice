#include <iostream>
using namespace std;
// LeetCode 143 将链表排序
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                current->next = list1;
                list1 = list1->next;
            }else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        // 连接剩余部分
        if(list1 != nullptr){
            current->next = list1;
        }
        if(list2 != nullptr){
            current->next = list2;
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
    
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;   
        while(fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }   
        if(prev != nullptr) {
            prev->next = nullptr;
        }
        return slow;
    }
    
public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* mid = middleNode(head);
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);
        return mergeTwoLists(left, right);
    }
};
int main()
{
    return 0;
}