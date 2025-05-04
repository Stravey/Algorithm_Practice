#include <iostream>
#include <cmath>
using namespace std;

int n,x,b,c,ans = 0;

int main()
{
    cin >> n >> x;
    for(int i = 1;i <= n;i++)
    {
        b = i;
        while(b != 0)
        {
            c = b % 10;
            b /= 10;
            if(c == x)
            {
                ans++;
            } 
        }
    }
    cout << ans << endl;
    return 0;
}
