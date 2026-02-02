#include <iostream>
#include <vector>
using namespace std;
// 杨辉三角 优化法 滚动数组
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int f[2][34];
        int now = 1;
        int pre = 0;
        f[pre][0] = 1;
        for(int i = 1;i <= rowIndex;i++) {
            for(int j = 0;j <= i;j++) {
                if(j == 0 || j == i) {
                    f[now][j] = 1;
                } else {
                    f[now][j] = f[pre][j] + f[pre][j - 1];
                }
            }
            now = 1 - now;
            pre = 1 - pre;
        }
        vector<int> ans;
        for(int j = 0;j <= rowIndex;j++) {
            ans.push_back(f[pre][j]);
        }
        return ans;
    }
};
int main()
{
    return 0;
}