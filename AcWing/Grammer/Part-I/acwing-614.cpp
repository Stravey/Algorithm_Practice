#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t = (a + b + abs(a - b)) / 2;
    int v = (t + c + abs(t - c)) / 2;
    cout << v << " eh o maior" << endl;
    return 0;
}