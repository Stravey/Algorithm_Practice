#include <iostream>
#include <cmath>
#define N 1000000000
using namespace std;

long long a,b,ans = 0;

int main()
{
    cin >> a >> b;
    if(pow(a,b) > N) {
        cout << -1;
    } else {
        ans = pow(a,b);
        cout << ans;
    }
    return 0;
}