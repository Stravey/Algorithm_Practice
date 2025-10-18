#include <iostream>
#include <vector>
using namespace std;
// 二维矩阵中查找目标值
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size();
        int l = 0,r = m * n - 1;
        while(l <= r) {
            int mid = (r - l) / 2 + l;
            int x = matrix[mid / n][mid % n];
            if(x < target) {
                l = mid + 1;
            } else if(x > target) {
                r = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    return 0;
}