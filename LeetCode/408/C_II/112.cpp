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
    bool flag = false;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        dfs(root,sum,targetSum);
        if(flag) return true;
        return false;
    }

    void dfs(TreeNode* root,int sum,int targetSum) {
        if(root == nullptr) return;
        sum += root -> val;
        if(sum == targetSum && root -> left == nullptr && root -> right == nullptr) {
            flag = true;
        }
        if(root -> left) dfs(root -> left,sum,targetSum);
        if(root -> right) dfs(root -> right,sum,targetSum);
    }
};  
int main()
{
    return 0;
}