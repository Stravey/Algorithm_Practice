#include <iostream>
#include <vector>
using namespace std;
// LeetCode 797
class Solution {
    int g[100][100];
    vector<vector<int>> ans;
    int n;
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        // 将vector转为邻接矩阵存储
        // 元素个数 行
        n = graph.size();
        for(int i = 0;i < n;i++) {
            // 列
            int m = graph[i].size();
            for(int j = 0;j < m;j++) {
                g[i][graph[i][j]] = 1;
            }
        }
        vector<int> t;
        t.push_back(0);
        dfs(0,t);
        return ans;
    }

    void dfs(int x,vector<int> t) {
        if(x == n - 1) {
            for(int i = 0;i < n;i++) {
                ans.push_back(t);
                return;   
            }
        } 
        for(int i = 0;i < n;i++) {
            if(g[x][i]) {
                t.push_back(i);
                dfs(i,t);
                t.pop_back();
            }
        }
    }
};

int main()
{
    return 0;
}