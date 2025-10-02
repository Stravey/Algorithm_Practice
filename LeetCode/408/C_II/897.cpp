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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode(-1,nullptr,nullptr);
        TreeNode* cur = ans;
        dfs(root,cur);
        return ans -> right;
    }

    void dfs(TreeNode* x,TreeNode* &cur) {
        if(x == nullptr) return;
        if(x -> left) dfs(x -> left,cur);
        cur -> right = x;
        x -> left = nullptr;
        cur = cur -> right;
        if(x -> right) dfs(x -> right,cur);
    }
};

int main()
{
    return 0;
}