#include <iostream>
using namespace std;

int n,ans = 0;

int main()
{
    cin >> n;
    for(int i = 1;i < n;i++) {
        if((i * i) % n < (n / 2.0)) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}