#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m, 
            vector<vector<int>>(n, vector<int>(k+1, -1)));
        int cost0 = (grid[0][0] == 0) ? 0 : 1;
        int score0 = (grid[0][0] == 0) ? 0 : (grid[0][0] == 1 ? 1 : 2);
        if (cost0 <= k) {
            dp[0][0][cost0] = score0;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int addCost = (grid[i][j] == 0) ? 0 : 1;
                int addScore = (grid[i][j] == 0) ? 0 : (grid[i][j] == 1 ? 1 : 2);
                
                if (i > 0) {
                    for (int c = 0; c <= k; c++) {
                        if (dp[i-1][j][c] != -1 && c + addCost <= k) {
                            dp[i][j][c + addCost] = max(dp[i][j][c + addCost], 
                                                       dp[i-1][j][c] + addScore);
                        }
                    }
                }
                if (j > 0) {
                    for (int c = 0; c <= k; c++) {
                        if (dp[i][j-1][c] != -1 && c + addCost <= k) {
                            dp[i][j][c + addCost] = max(dp[i][j][c + addCost], 
                                                       dp[i][j-1][c] + addScore);
                        }
                    }
                }
            }
        }
        int ans = -1;
        for (int c = 0; c <= k; c++) {
            ans = max(ans, dp[m-1][n-1][c]);
        }
        return ans;
    }
};
int main()
{
    return 0;
}