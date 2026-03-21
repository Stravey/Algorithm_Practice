#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int n;
    while(cin >> n, n) {
        for(int i = 0; i < n; i++) {
            a[i][i] = 1;
            for(int j = i + 1, k = 2; j < n; j++, k++) {
                a[i][j] = k;
            }
            for(int j = i + 1, k = 2; j < n; j++, k++) {
                a[j][i] = k;
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