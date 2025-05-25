#include <iostream>

using namespace std;

int a[105][105],m,n,sum = 0;

int main()
{
    cin >> m >> n;
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < n;j++) {
            cin >> a[i][j];
            // ±ß½çÌõ¼þ
            if((i == 0 || i == m - 1) || (j == 0 || j == n - 1)) {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}