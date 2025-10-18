#include <iostream>
#include <vector>
using namespace std;
// 简单的入度和出度问题
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in_degrees(n + 1);
        vector<int> out_degrees(n + 1);
        for(auto& edge : trust) {
            int x = edge[0],y = edge[1];
            ++in_degrees[y];
            ++out_degrees[x];
        }
        for(int i = 1;i <= n;i++) {
            if(in_degrees[i] == n - 1 && out_degrees[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    return 0;
}