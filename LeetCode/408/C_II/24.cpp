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
// 递归
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) {
            return head;
        }
        // 每次找到当前节点的下一个 然后进行头插
        ListNode* newHead = head -> next;
        head -> next = swapPairs(newHead -> next);
        newHead -> next = head;
        return newHead;
    }
};
int main() 
{
    return 0;
}