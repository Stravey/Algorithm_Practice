#include <iostream>
using namespace std;
int a,ans = 0;

int main()
{
    cin >> a;
    while(a > 1) {
        ans++;
        a /= 2;
    }
    cout << ans + 1;
    return 0;
}