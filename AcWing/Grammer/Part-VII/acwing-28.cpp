#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        auto p = node -> next;
        
        node -> val = p -> val;
        node -> next = p -> next;
        
        delete p;
    }
};

int main()
{
    return 0;
}