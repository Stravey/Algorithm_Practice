#include <bits/stdc++.h>
using namespace std;
// 并查集
// 547. 省份数量 
// https://leetcode.cn/problems/number-of-provinces/description/?envType=problem-list-v2&envId=hEQM0XeA
class Solution {
    int root[205];
public:
    int find(int x) {
        if(x == root[x]) {
            return x;
        }
        return root[x] = find(root[x]);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        // 初始化root数组
        for(int i = 0;i < n;i++) {
            root[i] = i;
        }
        // 遍历邻接矩阵
        for(int i = 0;i < n;i++) {
            for(int j = i + 1;j < n;j++) {
                if(isConnected[i][j]) {
                    // 查找左顶点的根
                    int x = find(i);
                    // 查找右顶点的根
                    int y = find(j);
                    // 如果不相等 进行合并 改变根的指针
                    if(x != y) {
                        root[x] = y;
                    }
                }
            }
        }
        int ans = 0;
        // 遍历如果找到了根 就为一组 即一个省
        for(int i = 0;i < n;i++) {
            if(root[i] == i) {
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}