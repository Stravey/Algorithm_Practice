#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int NumberOf1(int n) {
        int ans = 0;
        unsigned int u = n;
        while(u) {
            ans += u & 1;
            u >>= 1;
        }
        return ans;
    }
};

int main()
{

    return 0;
}