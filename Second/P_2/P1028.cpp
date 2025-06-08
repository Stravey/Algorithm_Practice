#include <iostream>
#include <cstring>
using namespace std;

int n,a[1010];

// ¼ÇÒä»¯ËÑË÷
int solve(int x) {
    int ans = 1;
    if(a[x] != -1) {
        return a[x];
    }
    for(int i = 1;i <= x /2;i++) {
        ans += solve(i);
    }
    return a[x] = ans;
}

int main()
{
    cin >> n;
    memset(a,-1,sizeof(a));
    a[1] = 1;
    cout << solve(n) << endl;
    return 0;
}