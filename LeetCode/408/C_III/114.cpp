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
// 时间复杂度 O(n) 空间复杂度O(1)
class Solution {
public:
    // 找前驱节点
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while(cur != nullptr) {
            if(cur -> left != nullptr) {
                // 根节点的左孩子
                auto next = cur -> left;
                auto pre = next;
                while(pre -> right != nullptr) {
                    // 根节点左孩子的右孩子
                    pre = pre -> right;
                }
                // 根节点右孩子链过来
                pre -> right = cur -> right;
                // 让左孩子为空
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