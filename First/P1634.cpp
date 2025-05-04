#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int x,n;
long long ans = 0;

int main()
{
    cin >> x >> n;
    ans = pow((1 + x),n);
    cout << ans;
    return 0;
}