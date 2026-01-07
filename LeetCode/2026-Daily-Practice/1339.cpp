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
class Solution {
    int sum = 0;
    int best = 0;
public:
    void dfs(TreeNode* root) {
        if(!root) {
            return;
        }
        sum += root -> val;
        dfs(root -> left);
        dfs(root -> right);
    }
    int find(TreeNode* root) {
        if(!root) {
            return 0;
        }
        int cur = find(root -> left) + find(root -> right) + root -> val;
        if(abs(cur * 2 - sum) < abs(best * 2 - sum)) {
            best = cur;
        }
        return cur;
    }
    int maxProduct(TreeNode* root) {
        dfs(root);
        find(root);
        return (long long)best * (sum - best) % 1000000007;
    }
};
int main()
{
    return 0;
}