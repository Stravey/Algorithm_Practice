#include <iostream>
using namespace std;
// 时间复杂度O(n) 空间复杂度O(1)
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = new ListNode(-1,head);
        head = p;
        ListNode* pre = p;
        ListNode* cur = pre -> next;
        if(cur == nullptr) return nullptr;
        if(cur -> next == nullptr) return cur;
        while(cur && cur -> next) {
            if(cur -> val == cur -> next -> val) {
                while(cur -> next != nullptr && cur -> val == cur -> next -> val) {
                    cur = cur -> next;
                }
                pre -> next = cur -> next;
                cur = pre -> next;
            } else {
                pre = pre -> next;
                cur = cur -> next;
            }
        }
        return head -> next;
    }
};
int main()
{
    return 0;
}