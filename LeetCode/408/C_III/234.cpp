#include <iostream>
using namespace std;
// 判断回文链表
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
    bool isPalindrome(ListNode* head) {
        if(!head || !head -> next) return true;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast -> next && fast -> next -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* firstHalf = head;
        ListNode* secondHalf = reverseList(slow -> next);

        ListNode* p1 = firstHalf;
        ListNode* p2 = secondHalf;
        bool flag = true;

        // 只需比较后半部分
        while(p2) {
            if(p1 -> val != p2 -> val) {
                flag = false;
                break;
            }
            p1 = p1 -> next;
            p2 = p2 -> next;
        }

        return flag;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;

        while(cur) {
            ListNode* tmp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = tmp;
        } 

        return prev;
    }
};
int main()
{
    return 0;
}