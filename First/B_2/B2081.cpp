#include <iostream>
using namespace std;

long long n,ans = 0;

int main()
{
    cin >> n;
    for(long long i = 1;i <= n;i++) {
        if(!(i % 7 == 0 || i % 10 == 7 || i / 10 % 10 == 7)) {
            ans += i * i;
        }
    }
    cout << ans << endl;
    return 0;
}