#include <bits/stdc++.h>

using namespace std;

int max(int x, int y) {
    return x > y ? x : y;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << max(x, y) << endl;
    return 0;
}