#include <iostream>
using namespace std;

int x,y,a,b;

int main()
{
    cin >> x >> y;
    a = x / y;
    b = x % y;
    cout << a << " " << b;
    return 0;
}