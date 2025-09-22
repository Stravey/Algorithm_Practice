#include <iostream>
#include <cstring>
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* p = new ListNode(-1000,head);
        head = p; // 定义头结点
        for(int i = 1;i < left;i++) p = p -> next;

        ListNode* q = new ListNode(-1000,nullptr);
        int cnt = right - left + 1;
        while(cnt--) {
            // 删除 + 头插法
            ListNode* x = p -> next;
            p -> next = x -> next;
            x -> next = q -> next;  
            q -> next = x;
        }
        // 反转链表
        ListNode* tmp = q;
        while(tmp -> next != nullptr) tmp = tmp -> next;
        tmp -> next = p -> next;
        p -> next = q -> next;

        return head -> next;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}