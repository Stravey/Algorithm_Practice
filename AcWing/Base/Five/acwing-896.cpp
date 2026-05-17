// 最长上升子序列
// n : 1 ~ 100000
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;

int n;
int a[N], f[N];

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[j] < a[i])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    return 0;   
}