#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        unordered_map<int, int> d;
        double sum = 0;
        for (auto& p : squares) {
            double x = p[0], y = p[1], l = p[2];
            sum += l * l;
            d[y] += l;
            d[y + l] -= l;
        }
        vector<int> pre;
        for (auto [a, b] : d) {
            pre.push_back(a);
        }
        sort(pre.begin(), pre.end());
        double tot = 0;
        sum /= 2;
        for (int i = 0; i + 1 < pre.size(); i++) {
            int w = pre[i + 1] - pre[i];
            tot += d[pre[i]];
            if (sum > w * tot) {
                sum -= w * tot;
            } else {
                return pre[i] + sum / tot;
            }
        }
        return -1;
    }
};
int main()
{
    return 0;
}