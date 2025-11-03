#include <iostream>
#include <vector>
using namespace std;
// 思路 : 先递归右子树 再递归左子树 当某个深度首次到达时 对应的节点就在右视图中
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
    vector<int> ans;
public:
    void dfs(TreeNode* root,int depth) {
        if(root == nullptr) {
            return;
        }
        // 深度首次遇到
        if(depth == ans.size()) {
            ans.push_back(root -> val);
        }
        // 先递归右子树 保证每次遇到的一定是最右侧结点
        dfs(root -> right,depth + 1);
        dfs(root -> left,depth + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
int main()
{
    return 0;
}
