#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
using namespace std;

// ÒÆ³ýÏàÁÚÔªËØ
string resultingString(string s) {
    string stack;
    for (char c : s) {
        if (!stack.empty()) {
            char top = stack.back();
            int diff = (c - top + 26) % 26;
            if (diff == 1 || diff == 25) {
                stack.pop_back(); 
                continue;
            }
        }
        stack.push_back(c); 
    }
    return stack;
}

int main()
{
    string s,ans;
    cin >> s;
    ans = resultingString(s);
    cout << ans << endl;
    return 0;
}