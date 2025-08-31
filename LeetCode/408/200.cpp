#include <bits/stdc++.h>
using namespace std;
// 连通性问题 DFS BFS
// DFS经典问题
// 200.岛屿数量
int n,m;
bool visited[305][305];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int numIslands(vector<vector<char>>& grid) {
    n = grid.size();
    m = grid[0].size();
    int count = 0;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(!visited[i][j] && grid[i][j] == '1') {
                dfs(i,j,grid);
                count++;
            }
        }
    }
    return count;
}

void dfs(int x,int y,vector<vector<char>>& grid) {
    if(x < 0 || x > n - 1 || y < 0 || y > m - 1) return;
    if(visited[x][y] == 1) return;
    if(grid[x][y] == '0') return;
    visited[x][y] = 1;
    for(int i = 0;i < 4;i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        dfs(tx,ty,grid);
    }
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}