#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        int a[40];
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i <= n; i++) {
            a[i] = a[i - 2] + a[i - 1];
        }
        return a[n];
    }
};

int main()
{
    return 0;
}