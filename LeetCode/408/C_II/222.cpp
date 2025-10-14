#include <iostream>
using namespace std;
// LeetCode 222 统计完全二叉树的结点个数
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        int left = countLevel(root -> left);
        int right = countLevel(root -> right);
        if(left == right) {
            // 左子树是完全二叉树
            return countNodes(root -> right) + (1 << left);
        } else {
            // 右子树是完全二叉树
            return countNodes(root -> left) + (1 << right);
        }
    }
    int countLevel(TreeNode* root) {
        int level = 0;
        // 对于完全二叉树，高度就是最左侧路径的长度
        while(root != nullptr) {
            level++;
            root = root -> left;
        }
        return level;
    }
};
int main()
{
    return 0;
}