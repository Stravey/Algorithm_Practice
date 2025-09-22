#include <iostream>
using namespace std; 
// 2019��408ͳ������ �������� Ѱ�������е� + �������� + �ϲ�����
struct ListNode { 
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(1)
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* p = new ListNode(-1,head);
        head = p;
        ListNode* q = head;
        int length = 0;
        while(q -> next != nullptr) {
            p = p -> next;
            q = q -> next;
            length++;
            if(q -> next) {
                q = q -> next;
                length++;
            }
        }
        ListNode* tmp = new ListNode(-1,nullptr);
        while(p -> next) {
            ListNode* i = p -> next;
            p -> next = i -> next;
            i -> next = tmp -> next;
            tmp -> next = i;
        }

        // �ϲ�head tmp
        ListNode* ans = new ListNode(-1,nullptr);
        ListNode* insert = ans;
        for(int i = 0;i < length;i++) {
            if(i & 1) {
                ListNode* cnt = tmp -> next;
                tmp -> next = cnt -> next;
                cnt -> next = insert -> next;
                insert -> next = cnt;
                insert = insert -> next;
            } else {
                ListNode* cnt = head -> next;
                head -> next = cnt -> next;
                cnt -> next = insert -> next;
                insert -> next = cnt;
                insert = insert -> next;
            }
        }
        ans = head;
    }
};
int main()
{
    return 0;
}