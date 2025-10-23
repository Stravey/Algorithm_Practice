#include <iostream>
#include <vector>
using namespace std;
class Solution {
    typedef pair<int,int> PII;
    vector<PII> borders;
    bool visited[55][55];
    int m,n;
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        m = grid.size(),n = grid[0].size();
        int originalcolor = grid[row][col];
        dfs(row,col,originalcolor,grid);
        for(auto [x,y] : borders) {
            grid[x][y] = color;
        }
        return grid;
    }
    void dfs(int x,int y,int originalcolor,vector<vector<int>> grid) {
        if(x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || grid[x][y] != originalcolor) {
            return;
        }
        visited[x][y] = true;
        bool mark = false;
        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n || grid[nx][ny] != originalcolor) {
                mark = true;
                break;
            }
        }
        if(mark) {
            borders.push_back({x,y});
        }
        for(int i = 0; i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            dfs(nx,ny,originalcolor,grid);
        }
    }
};
int main()
{
    return 0;
}