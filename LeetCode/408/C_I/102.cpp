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
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;  // 初始化为空向量
    if (!root) return ans;    // 处理空树情况
    
    int front = 0;
    int rear = 0;
    typedef pair<TreeNode*, int> PTI;
    PTI q[2010];  
    
    // 根节点入队，层级为0
    q[rear++] = make_pair(root, 0);
    
    while (front < rear) {
        PTI temp = q[front++];
        TreeNode* node = temp.first;
        int level = temp.second;
        
        // 如果是新的一层，添加一个新的空向量
        if (level == ans.size()) {
            ans.push_back(vector<int>());
        }
        
        // 将当前节点值加入对应层
        ans[level].push_back(node->val);
        
        // 左子树入队
        if (node->left) {
            q[rear++] = make_pair(node->left, level + 1);
        }
        // 右子树入队
        if (node->right) {
            q[rear++] = make_pair(node->right, level + 1);
        }
    }
    return ans;
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}