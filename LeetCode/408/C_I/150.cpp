#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Solution {
    int st[10005];
    int top = -1;
public:
    int evalRPN(vector<string>& tokens) {
        for(string c : tokens) {
            if(c == "+") {
                int a = st[top--];
                int b = st[top--];
                st[++top] = b + a;
            } else if(c == "-") {
                int a = st[top--];
                int b = st[top--];
                st[++top] = b - a;
            } else if(c == "*") {
                int a = st[top--];
                int b = st[top--];
                st[++top] = b * a;
            } else if(c == "/") {
                int a = st[top--];
                int b = st[top--];
                st[++top] = b / a;
            } else {
                int x = get_int(c);
                st[++top] = x;
            }
        }
        return st[0];
    }
    int get_int(string s) {
        bool flag = (s[0] == '-') ? 1 : 0;
        int ans = 0;
        int n = s.size() - 1;
        int base = 1;
        for(int i = n;i >= flag;i--) {
            ans += (s[i] - '0') * base;
            base *= 10;
        }
        if(flag) ans *= (-1);
        return ans;
    }
};
int main()
{
    return 0;
}