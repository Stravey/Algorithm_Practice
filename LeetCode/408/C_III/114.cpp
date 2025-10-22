#include <iostream>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// ʱ�临�Ӷ� O(n) �ռ临�Ӷ�O(1)
class Solution {
public:
    // ��ǰ���ڵ�
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while(cur != nullptr) {
            if(cur -> left != nullptr) {
                // ���ڵ������
                auto next = cur -> left;
                auto pre = next;
                while(pre -> right != nullptr) {
                    // ���ڵ����ӵ��Һ���
                    pre = pre -> right;
                }
                // ���ڵ��Һ���������
                pre -> right = cur -> right;
                // ������Ϊ��
                cur -> left = nullptr;
                cur -> right = next;
            }
            cur = cur -> right;
        }
    }
};
int main()
{
    return 0;
}