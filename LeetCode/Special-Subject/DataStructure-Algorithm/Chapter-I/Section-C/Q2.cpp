#include <iostream>
#include <stack>
#include <vector>
using namespace std;
//  Äæ²¨À¼±í´ïÊ½
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& token : tokens) {
            char c = token[0];
            if(token.size() > 1 || isdigit(c)) {
                st.push(stoi(token));
                continue;
            }
            int x = st.top();
            st.pop();
            if(c == '+') {
                st.top() += x;
            } else if(c == '-') {
                st.top() -= x; 
            } else if(c == '*') {
                st.top() *= x;
            } else {
                st.top() /= x;
            }
        }
        return st.top();
    }
};
int main()
{
    return 0;
}