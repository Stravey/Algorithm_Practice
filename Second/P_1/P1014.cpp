#include <iostream>
using namespace std;

int n,m = 1;

int main()
{
    cin >> n;
    while (n > m) {
        n -= m;
        m++;
    }
    if(m % 2 == 0) {
        cout << n << "/" << (m + 1 - n);
    } else {
        cout << (m + 1 - n) << "/" << n;
    }
    return 0;
}