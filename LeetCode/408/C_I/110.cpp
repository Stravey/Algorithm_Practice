#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool flag = true;
// 后序遍历的思想
int check(TreeNode* root) {
    int l = -1;
    int r = -1;
    if(root->left) l = check(root->left);
    if(root->right) r = check(root->right);
    if(abs(l - r) > 1) flag = false;
    return max(l,r) + 1; 
}
bool isBalanced(TreeNode* root) {
    if(root == nullptr) { 
        return flag;
    }
    int t = check(root);
    return flag;
}
int main()
{
    cout << "Hello World!" <<  endl;
    return 0;
}