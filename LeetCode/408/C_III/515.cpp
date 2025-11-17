#include <iostream>
#include <vector>
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
// 二叉树中找每一行的最大值
class Solution {
public:
    void dfs(vector<int> &ans,TreeNode* root,int height) {
        if(height == ans.size()) {
            ans.push_back(root -> val);
        } else {
            ans[height] = max(ans[height],root -> val);
        }
        if(root -> left) {
            dfs(ans,root -> left,height + 1);
        }
        if(root -> right) {
            dfs(ans,root -> right,height + 1);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        if(root == nullptr) {
            return {};
        }
        vector<int> ans;
        dfs(ans,root,0);
        return ans;
    }
};
int main()
{
    return 0;
}