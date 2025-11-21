#include <iostream>
#include <vector>
using namespace std;
// 计算投影面积
// xy 平面的投影面积等于网格上非零数值的数目
// yz 平面的投影面积等于网格上每一列最大数值之和
// zx 平面的投影面积等于网格上每一行最大数值之和
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int xy_sum = 0,yz_sum = 0,xz_sum = 0;
        for(int i = 0;i < n;i++) {
            int yz_height = 0,xz_height = 0;
            for(int j = 0;j < n;j++) {
                xy_sum += grid[i][j] > 0 ? 1 : 0;
                yz_height = max(yz_height,grid[j][i]);
                xz_height = max(xz_height,grid[i][j]);
            }
            yz_sum += yz_height;
            xz_sum += xz_height;
        }
        return xy_sum + yz_sum + xz_sum;
    }
};
int main()
{
    return 0;
}