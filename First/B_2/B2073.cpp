#include <iostream>
#include <iomanip>
using namespace std;

int a,b,n;

int main()
{
    cin >> a >> b >> n;
    for(int i = 1;i <= n;i++) {
        a %= b;
        a *= 10;
    }
    a /= b;
    cout << a;
    return 0;
}