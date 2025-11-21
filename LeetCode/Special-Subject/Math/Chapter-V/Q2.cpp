#include <iostream>
#include <vector>
using namespace std;
// 给定一个二维数组的一些点 求他们组成的最大三角形面积
class Solution {
public:
    double triangle(int x1,int y1,int x2,int y2,int x3,int y3) {
        return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double ans = 0;
        for(int i = 0;i < n;i++) {
            for(int j = i + 1;j < n;j++) {
                for(int t = j + 1;t < n;t++) {
                    ans = max(ans,triangle(points[i][0],points[i][1],points[j][0],points[j][1],points[t][0],points[t][1]));
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