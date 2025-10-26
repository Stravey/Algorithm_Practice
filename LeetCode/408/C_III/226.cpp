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
// ·­×ª¶þ²æÊ÷
class Solution {
public:
    void invert(TreeNode* t) {
        if(t == nullptr) {
            return;
        }
        TreeNode* tmp = t -> left;
        t -> left = t -> right;
        t -> right = tmp;
        invert(t -> left);
        invert(t -> right);
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
int main()
{
    return 0;
}