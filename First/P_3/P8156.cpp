#include <iostream>
using namespace std;

long long T,n;
int a[105];

int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        long long ans = 0;
        for(int i = 1;i <= n;i++) 
        {
            cin >> a[i];
        }
        for(int i = 1;i <= n;i++) 
        {
            for(int j = i;j <= n;j++) 
            {
                for(int k = j;k <= n;k++) 
                {
                    if(a[i] + a[j] == a[k]) 
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}