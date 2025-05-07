#include <iostream>
#include <cmath>
using namespace std;

int x,ans = 8;
char c;

int main()
{
    cin >> x >> c;
    if(c == 'y')
    {
        ans += 5;
    }
    x -= 1000;
    while(x > 0) {
        x -= 500;
        ans += 4;
    }
    cout << ans;
    return 0;
}