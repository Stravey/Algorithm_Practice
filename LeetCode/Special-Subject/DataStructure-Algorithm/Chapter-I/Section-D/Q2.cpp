#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i = 0;i < n;i++) {
            while(!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev = st.top();
                ans[prev] = i - prev;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
int main()
{
    return 0;
}