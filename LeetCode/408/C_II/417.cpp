#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<bool>> vis_1(m,vector<bool>(n,false)),vis_2(m,vector<bool>(n,false));
        queue<pair<int,int>> q1,q2;
        vector<int> div = {-1,0,1,0,-1};

        for(int i = 0;i < m;i++) {
            q1.emplace(i,0);
            vis_1[i][0] = true;
            q2.emplace(i,n - 1);
            vis_2[i][n - 1] = true;
        }

        for(int j = 0;j < n;j++) {
            q1.emplace(0,j);
            vis_1[0][j] = true;
            q2.emplace(m - 1,j);
            vis_2[m - 1][j] = true;
        }

        auto bfs = [&](queue<pair<int, int>>& q, vector<vector<bool>>& vis) {
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (int k = 0; k < 4; ++k) {
                    int nx = x + div[k], ny = y + div[k + 1];
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n
                        && !vis[nx][ny]
                        && heights[nx][ny] >= heights[x][y]) {
                        vis[nx][ny] = true;
                        q.emplace(nx, ny);
                    }
                }
            }
        };

        bfs(q1,vis_1);
        bfs(q2,vis_2);

        vector<vector<int>> ans;
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                if(vis_1[i][j] && vis_2[i][j]) {
                    ans.push_back({i,j});
                }
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}