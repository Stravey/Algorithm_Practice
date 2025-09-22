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
    int max_depth = -1;
    int ans = 0;
public:
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
    void dfs(TreeNode* root,int depth) {
        if(depth > max_depth) {
            max_depth = depth;
            ans = root -> val;
        }
        if(root -> left == nullptr && root -> right == nullptr) {
            return;
        }
        if(root -> left) dfs(root -> left,depth + 1);
        if(root -> right) dfs(root -> right,depth + 1);
    }
};
int main()
{
    return 0;
}