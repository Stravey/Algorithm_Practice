#include <iostream>
using namespace std;

int main()
{
    long long ans = 0;
    long long n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        ans += i;
    }
    cout << ans;
    return 0;
}