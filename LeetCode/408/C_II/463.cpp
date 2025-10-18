#include <iostream>
#include <vector>
using namespace std;
// solution 1
class Solution {
    constexpr static int dx[4] = {0,1,0,-1};
    constexpr static int dy[4] = {1,0,-1,0};
public:
    int dfs(int x,int y,vector<vector<int>> &grid,int n,int m) {
        if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0) {
            return 1;
        }
        if(grid[x][y] == 2) {
            return 0;
        }
        grid[x][y] = 2;
        int res = 0;
        for(int i = 0;i < 4;i++) {
            int tx = x + dx[i];
            int ty = y + dy[i];
            res += dfs(tx,ty,grid,n,m);
        }
        return res;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        int ans = 0;
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                if(grid[i][j] == 1) {
                    ans += dfs(i,j,grid,n,m);
                }
            }
        }
        return ans;
    }
};
// solution 2
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int add = 4;    //方格初始周长
                if(grid[i][j] == 1) {
                    if(i -1 >= 0 && grid[i -1][j] == 1) add--;  //上
                    if(i +1 < m && grid[i +1][j] == 1) add--;   //下
                    if(j -1 >= 0 && grid[i][j -1] == 1) add--;  //左
                    if(j +1 < n && grid[i][j +1] == 1) add--;   //右
                    res += add;
                }
            }
        }
        return res;
    }
};
int main()
{
    return 0;
}