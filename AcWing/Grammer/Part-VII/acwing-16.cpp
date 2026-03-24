#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceSpaces(string &str) {
        string ans;
        for(auto & x : str) {
            if(x == ' ') {
                ans += "%20";
            } else {
                ans += x;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}