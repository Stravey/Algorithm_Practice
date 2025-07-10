#include <iostream>
using namespace std;

long long n,f[1000005] = {0,1,2},k[1000005] = {0,0,1};

int main()
{
    cin >> n;
    for(int i = 3;i <= n;i++) {
        f[i] = (f[i - 1] + f[i - 2] + k[i - 1] * 2) % 10000;
        k[i] = (f[i - 2] + k[i - 1]) % 10000;
    }
    cout << f[n];
    return 0;
}