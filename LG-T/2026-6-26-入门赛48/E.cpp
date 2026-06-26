#include <iostream>
using namespace std;

char a[105][105];

int cal(int i, int j, int n) {
    int dist = min(min(i - 1, n - i),min(j - 1, n - j));
    return dist + 1;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int b = cal(i, j, n);
            if(b % 2 == 1) {
                a[i][j] = '#';
            } else {
                a[i][j] = '.';
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}