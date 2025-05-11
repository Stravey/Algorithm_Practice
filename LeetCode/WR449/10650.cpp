#include <iostream>
#include <vector>
using namespace std;

bool canPartitionGrid(vector<vector<int>> &grid)
{
    //行数
    int m = grid.size();
    if(m == 0) {
        return false;
    }
    //列数
    int n = grid[0].size();
    if(n == 0) {
        return false;
    }
    //总数
    long long total = 0;
    for(const auto& row : grid) {
        for(int num : row) {
            total += num;
        }
    }
    if(total % 2 != 0) {
        return false;
    }
    long long target = total / 2;
    //水平
    long long sum = 0;
    for(int i = 0;i < m;i++) {
        for(int num : grid[i]) {
            sum += num;
        }
        if(sum == target && i < m -1) {
            return true;
        }
    }
    //垂直
    long long cnt = 0;
    for(int j = 0;j < n;j++) {
        for(int i = 0;i < m;i++) {
            cnt += grid[i][j];
        }
        if(cnt == target && j < n -1) {
            return true;
        }
    }
    return false;
}

int main()
{
    return 0;
}