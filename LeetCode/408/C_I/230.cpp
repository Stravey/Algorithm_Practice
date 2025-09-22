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
vector<int> v;
void find(TreeNode* root) {
    if(root->left) find(root->left);
    v.emplace_back(root->val);
    if(root->right) find(root->right);
}
int kthSmallest(TreeNode* root, int k) {
    find(root);
    return v[k - 1];
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}