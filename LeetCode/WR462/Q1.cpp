#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
    int top = x;
    int bottom = x + k - 1;
    int left = y;
    int right = y + k - 1;
    for (int i = 0; i < k / 2; i++) {
        int row1 = top + i;          
        int row2 = bottom - i;       
        for (int j = left; j <= right; j++) {
            swap(grid[row1][j], grid[row2][j]);
        }
    }  
    return grid;
}

int main()
{
    
    return 0;
}