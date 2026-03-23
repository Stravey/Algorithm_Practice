#include <bits/stdc++.h>

using namespace std;

int abs(int x) {
    if(x < 0) return -x;
    return x;
}

int main()
{
    int x;
    cin >> x;
    cout << abs(x) << endl;
    return 0;
}