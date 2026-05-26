#include<bits/stdc++.h> 

using namespace std;

int a[3] = {0};

int main( )
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x % 3]++;
    }
    cout << a[0] / 2 + min(a[1], a[2]) << endl;
    return 0;
}