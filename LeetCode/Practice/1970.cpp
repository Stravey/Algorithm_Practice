#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        m = row,n = col;
        vector<vector<int>> b(m,vector<int>(n));
        for(int i = 0;i < cells.size();i++) {
            int x = cells[i][0] - 1,y = cells[i][1] - 1;
            b[x][y] = i + 1;
        }
        int left = 1,right = cells.size();
        while(left < right) {
            int mid = ((left + right) >> 1) + 1;
            vector<vector<int>> g(b);
            for(int j = 0;j < n;j++) {
                if(dfs(g,0,j,mid)) {
                    left = mid;
                    break;
                }
            }
            if(left != mid) {
                right = mid - 1;
            }
        }
        return left;
    }
private:
    int m,n;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};

    bool legal(int x,int y) {
        return x >= 0 && x < m && y >= 0 && y < n;
    }

    bool dfs(vector<vector<int>>& g,int x,int y,const int day) {
        if(!legal(x,y) || g[x][y] == -1 || (0 < g[x][y] && g[x][y] <= day)) {
            return false;
        }
        if(x == m - 1) {
            return true;
        }
        int d = day;
        g[x][y] = -1;
        for(int i = 0;i < 4;i++) {
            int tx = x + dx[i],ty = y + dy[i];
            if(dfs(g,tx,ty,day)) {
                return true;
            }
        }
        g[x][y] = d;
        return false;
    }
};

int main()
{
    return 0;
}