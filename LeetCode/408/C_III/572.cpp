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
class Solution {
public:
    bool check(TreeNode* root,TreeNode* t) {
        if(!root && !t) {
            return true;
        }
        if((root && !t) || (!root && t) || (root -> val != t -> val)) {
            return false;
        }
        return check(root -> left,t -> left) && check(root -> right,t -> right);
    }
    bool dfs(TreeNode* root,TreeNode* t) {
        if(!root) {
            return false;
        }
        return check(root,t) || dfs(root -> left,t) || dfs(root -> right,t);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs(root,subRoot);
    }
};
int main()
{
    return 0;
}