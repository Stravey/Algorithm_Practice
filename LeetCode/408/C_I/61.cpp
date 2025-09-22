#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) {
            return head;
        }
        int len = 0;
        ListNode* p = new ListNode(-1,head);
        head = p;
        while(p -> next != nullptr) {
            p = p -> next;
            len++;
        }
        // 首尾串起来
        p -> next = head -> next;
        // 数据优化
        k %= len;
        int cnt = len - k;
        ListNode* q = head;
        while(cnt--) {
            q = q -> next;
        }
        head = q -> next;
        q -> next = nullptr;
        return head;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}