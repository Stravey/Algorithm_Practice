#include <iostream>
using namespace std;

int n,ans = 0;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        ans += i;
    }
    cout << ans;
    return 0;
}