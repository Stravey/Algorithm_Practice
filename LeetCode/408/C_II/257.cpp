#include <iostream>
#include <vector>
using namespace std;
// dfs 打印出二叉树的所有路径
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
    void construct_paths(TreeNode* root,string path,vector<string>& paths) {
        if(root != nullptr) {
            path += to_string(root -> val);
            // 叶结点
            if(root -> left == nullptr && root -> right == nullptr) {
                paths.push_back(path);
            } else {
                path += "->";
                construct_paths(root -> left,path,paths);
                construct_paths(root -> right,path,paths);
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        construct_paths(root,"",paths);
        return paths;
    }
};
int main()
{
    return 0;
}