#include <bits/stdc++.h>
using namespace std;

int a[11];
int main()
{
    for(int i = 1; i <= 10; i++) {
        int x;
        cin >> x;
        if(x > 0) {
            a[i] = x;
        } else {
            a[i] = 1;
        }
    }
    for(int i = 1; i <= 10; i++) {
        cout << "X[" << i - 1 << "]" << " = " << a[i] << endl;
    }
    return 0;
}