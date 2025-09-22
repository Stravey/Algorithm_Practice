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
    vector<vector<int>> ans;  // ��ʼ��Ϊ������
    if (!root) return ans;    // ����������
    
    int front = 0;
    int rear = 0;
    typedef pair<TreeNode*, int> PTI;
    PTI q[2010];  
    
    // ���ڵ���ӣ��㼶Ϊ0
    q[rear++] = make_pair(root, 0);
    
    while (front < rear) {
        PTI temp = q[front++];
        TreeNode* node = temp.first;
        int level = temp.second;
        
        // ������µ�һ�㣬���һ���µĿ�����
        if (level == ans.size()) {
            ans.push_back(vector<int>());
        }
        
        // ����ǰ�ڵ�ֵ�����Ӧ��
        ans[level].push_back(node->val);
        
        // ���������
        if (node->left) {
            q[rear++] = make_pair(node->left, level + 1);
        }
        // ���������
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