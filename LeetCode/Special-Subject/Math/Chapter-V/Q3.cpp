#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// 哈希表 可以遍历每一对点 计算它们的斜率存储在哈希表中
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans = 0;
        int n = points.size();
        double k;
        for(int i = 0;i < n - 1;i++) {
            vector<int> &p = points[i];
            unordered_map<double,int> hash;
            for(int j = i + 1;j < n;j++) {
                vector<int> &q = points[j];
                if(p[0] == q[0]) {
                    k = __DBL_MAX__; // 垂直线 k趋于无穷大
                } else {
                    k = double(p[1] - q[1]) / double(p[0] - q[0]);
                }
                hash[k]++; // 统计该斜率出现的次数
                ans = max(ans,hash[k]);
            }
        }
        return ans + 1; // 要把基准点加回来 
    }
};
signed main()
{
    return 0;
}