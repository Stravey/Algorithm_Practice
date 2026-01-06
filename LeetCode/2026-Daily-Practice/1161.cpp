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
    vector<int> sum;
    void dfs(TreeNode* root,int level) {
        if(level == sum.size()) {
            sum.push_back(root -> val);
        } else {
            sum[level] += root -> val;
        }
        if(root -> left) {
            dfs(root -> left,level + 1);
        } 
        if(root -> right) {
            dfs(root -> right,level + 1);
        }
    }
public:
    int maxLevelSum(TreeNode* root) {
        dfs(root,0);
        int ans = 0;
        for(int i = 0;i < sum.size();i++) {
            if(sum[i] > sum[ans]) {
                ans = i;
            }
        }
        return ans + 1;
    }
};

int main()
{
    return 0;
}