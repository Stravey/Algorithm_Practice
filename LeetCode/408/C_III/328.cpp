#include <iostream>
#include <vector>
using namespace std;
// ÆæÅ¼Á´±í
// https://leetcode.cn/problems/odd-even-linked-list/?envType=problem-list-v2&envId=grmf6YFN
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) {
            return head;
        }
        ListNode* temp = head -> next;
        ListNode* odd = head;
        ListNode* even = temp;
        while(even != nullptr && even -> next != nullptr) {
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = odd -> next;
            even = even -> next;
        }
        odd -> next = temp;
        return head;
    }
};
int main()
{
    return 0;
}