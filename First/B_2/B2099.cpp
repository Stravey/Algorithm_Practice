#include <iostream>
using namespace std;

int a[6][6],m,n;

int main() 
{
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            cin >> a[i][j];
       }
    }
    cin >> m >> n;
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            if(i == m - 1) {
                cout << a[n - 1][j] << " ";
            } else if(i == n - 1) {
                cout << a[m - 1][j] << " ";
            } else {
                cout << a[i][j] << " ";
            }
       }
       cout << endl;
    }
    return 0;
}