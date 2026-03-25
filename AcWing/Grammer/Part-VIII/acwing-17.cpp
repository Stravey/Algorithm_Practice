#include <bits/stdc++.h>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        vector<int> ans;
        ListNode* prev = nullptr;
        ListNode* p = head;
        // 反转链表
        while(p) {
            ListNode * q = p -> next;
            p -> next = prev;
            prev = p;
            p = q;
        }
        // p指针为空了 应该是prev是保存的反转链表后的头
        while(prev) {
            int x = prev -> val;
            prev = prev -> next;
            ans.push_back(x);
        }
        return ans;
    }
};

int main()
{

    return 0;
}