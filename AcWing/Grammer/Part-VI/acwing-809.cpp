#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
    while(y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << lcm(x, y) << endl;
    return 0;
}