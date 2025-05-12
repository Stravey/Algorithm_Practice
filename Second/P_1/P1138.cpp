#include <iostream>
#include <algorithm>
#define N 30005
using namespace std;

int n,k,ans = 0;
int a[N],b[N];

int main()
{
    cin >> n >> k;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }
    for(int i = 1;i <= 30005;i++) 
    {
        if(b[i] == 1)
        {
            ans++;
        }
        if(ans == k)
        {
            cout << i;
            return 0;
        }
    }
    cout << "NO RESULT";
    return 0;
}