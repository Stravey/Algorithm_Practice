#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(int n, vector<int>& present, vector<int>& future, 
                  vector<vector<int>>& hierarchy, int budget) {
        vector<vector<int>> g(n);
        
        // 构建树结构
        for (auto& e : hierarchy) {
            g[e[0] - 1].push_back(e[1] - 1);
        }
        
        // DP定义：
        // dp[u][state][budget] - 以u为根的子树，状态为state，预算为budget时的最大收益
        // state = 0: 父节点未购买，当前节点不能享受折扣
        // state = 1: 父节点已购买，当前节点可以享受折扣
        auto dfs = [&](auto&& self, int u) -> tuple<vector<int>, vector<int>> {
            int cost = present[u];           // 原价
            int dCost = present[u] / 2;      // 折扣价
            
            // 初始化dp数组
            // dp0: state=0 (父节点未购买)
            // dp1: state=1 (父节点已购买，可享受折扣)
            vector<int> dp0(budget + 1, 0);
            vector<int> dp1(budget + 1, 0);
            
            // 处理子节点
            for (int v : g[u]) {
                auto [childDp0, childDp1] = self(self, v);
                vector<int> newDp0 = dp0, newDp1 = dp1;
                
                // 合并子节点的结果
                for (int i = budget; i >= 0; i--) {
                    for (int j = 0; j <= i; j++) {
                        // state=0: 父节点未购买，子节点可以选择state=0或state=1
                        if (i - j >= 0) {
                            newDp0[i] = max(newDp0[i], dp0[i - j] + max(childDp0[j], childDp1[j]));
                        }
                        // state=1: 父节点已购买，子节点可以选择state=0或state=1
                        if (i - j >= 0) {
                            newDp1[i] = max(newDp1[i], dp1[i - j] + max(childDp0[j], childDp1[j]));
                        }
                    }
                }
                dp0 = move(newDp0);
                dp1 = move(newDp1);
            }
            
            // 考虑当前节点的购买决策
            vector<int> newDp0 = dp0, newDp1 = dp1;
            
            for (int i = budget; i >= 0; i--) {
                // 状态0：父节点未购买
                // 选项1：不买当前节点
                newDp0[i] = dp0[i];
                // 选项2：以原价购买当前节点（购买后，子节点可以享受折扣）
                if (i >= cost) {
                    newDp0[i] = max(newDp0[i], dp1[i - cost] + (future[u] - cost));
                }
                
                // 状态1：父节点已购买
                // 选项1：不买当前节点
                newDp1[i] = dp0[i];  // 注意：父节点已购买，但当前节点不买，子节点不能享受折扣
                // 选项2：以折扣价购买当前节点
                if (i >= dCost) {
                    newDp1[i] = max(newDp1[i], dp1[i - dCost] + (future[u] - dCost));
                }
            }
            
            return {newDp0, newDp1};
        };
        
        auto [dp0, dp1] = dfs(dfs, 0);
        return max(dp0[budget], dp1[budget]);
    }
};

int main() {
    // 测试用例
    Solution sol;
    int n = 3;
    vector<int> present = {2, 4, 6};
    vector<int> future = {5, 7, 10};
    vector<vector<int>> hierarchy = {{1, 2}, {1, 3}};
    int budget = 10;
    
    cout << "Max profit: " << sol.maxProfit(n, present, future, hierarchy, budget) << endl;
    return 0;
}