#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

ll gcd(int a,int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(int a,int b)
{
    return a / gcd(a,b) * b;
}

int main()
{
    ll x,y;
    ll ans = 0;
    cin >> x >> y;
    for(ll i = 1;i <= sqrt(x * y);i++)
    {
        if((x * y) % i == 0 && gcd(i,(x * y) / i) == x)
        {
            ans++;
        }
    }
    ans *= 2;
    if(x == y) 
    {
        ans--;
    }
    cout << ans;
    return 0;
}