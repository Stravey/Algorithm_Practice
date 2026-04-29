/*

先手必胜状态:可以走到一个必败状态
先手必败状态:走不到一个必败状态

*/
// 基础博弈论 Nim游戏
#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    while(n--)
    {
        int x;
        scanf("%d", &x);
        ans ^= x;
    }
    if(ans) puts("Yes");
    else puts("No");
    return 0;
}