#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int n;
    while(cin >> n, n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int m = i + j;
                a[i][j] = pow(2, m);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}