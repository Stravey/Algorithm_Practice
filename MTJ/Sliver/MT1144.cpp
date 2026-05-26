#include<bits/stdc++.h> 

using namespace std;

int getSum(int x) {
    int ans = 0;
    while(x) {
        int digit = x % 10;
        ans += digit;
        x /= 10;
    }
    return ans;
}

int main( )
{
    int n;
    cin >> n;
    int t = getSum(n);
    if(n % t == 0) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}