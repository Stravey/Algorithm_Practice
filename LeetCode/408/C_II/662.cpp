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
public:
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long ans = 1;
        vector<pair<TreeNode*,unsigned long long>> a;
        a.emplace_back(root,1L);
        while(!a.empty()) {
            vector<pair<TreeNode*,unsigned long long>> tmp;
            for(auto &[node,index] : a) {
                if(node -> left) {
                    tmp.emplace_back(node -> left,index * 2);
                }
                if(node -> right) {
                    tmp.emplace_back(node -> right,index * 2 + 1);
                }
            }
            ans = max(ans,a.back().second - a[0].second + 1);
            a = move(tmp);
        }
        return ans;
    }
};
int main()
{
    return 0;
}