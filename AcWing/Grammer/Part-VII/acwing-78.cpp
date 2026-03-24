#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string leftRotateString(string str, int n) {
        string tmp = "";
        for(int i = 0; i < n; i++) {
            tmp += str[i];
        }
        string ans = "";
        for(int i = n; i < str.size(); i++) {
            ans += str[i];
        }
        ans = ans + tmp;
        return ans;
    }
};

int main()
{
    return 0;
}