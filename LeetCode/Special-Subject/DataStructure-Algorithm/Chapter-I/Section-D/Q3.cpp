#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// 与接雨水很类似
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size = heights.size();
        if(size == 1) {
            return heights[0];
        }
        int ans = 0;
        stack<int> s;
        for(int i = 0;i < size;i++) {
            while(!s.empty() && heights[s.top()] > heights[i]) {
                int len = heights[s.top()];
                s.pop();
                int weight = i;
                if(!s.empty()) {
                    weight = i - s.top() - 1;
                }
                ans = max(ans,len * weight);
            }
            s.push(i);
        }
        while(!s.empty()) {
            int len = heights[s.top()];
            s.pop();
            int weight = size;
            if(!s.empty()) {
                weight = size - s.top() - 1;
            }
            ans = max(ans,len * weight);
        }
        return ans;
    }
};
int main()
{
    return 0;
}