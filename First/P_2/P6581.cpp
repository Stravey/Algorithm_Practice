#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    if (a <= 0)
    {
        cout << 0;
        return 0;
    }
    unsigned long long b = a;
    cout << 2 * b - 1;
    return 0;
}