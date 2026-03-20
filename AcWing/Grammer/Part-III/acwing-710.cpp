#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int i = x, j = 0; j < 6; i++) {
        if(i % 2) {
            cout << i << endl;
            j++;
        }
    }
    return 0;
}