#include <iostream>
using namespace std;

#define N 1000005

int a[N],n;
long long ans = 0,t;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {
        if(a[i + 1] > a[i])
        {
            t++;
            if(t > ans)
            {
                ans = t;
            }
        } else 
        {
            t = 1;
        }
    }
    cout << ans;
    return 0;
}