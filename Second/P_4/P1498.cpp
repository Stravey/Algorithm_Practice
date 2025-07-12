#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char a[2050][2050];

void reverse(int x,int y,int n) {
    if(n == 1) {
        a[x][y + 1] = '/';
        a[x + 1][y] = '/';
        a[x][y + 2] = '\\';
        a[x + 1][y + 3] = '\\';
        a[x + 1][y + 1] = '_';
        a[x + 1][y + 2] = '_';
        return;
    }
    int dis = pow(2,n);
    reverse(x,y + dis / 2,n - 1);
    reverse(x + dis / 2,y,n - 1);
    reverse(x + dis / 2,y + dis,n - 1);
}

int main()
{
    int n;
    cin >> n;   
    memset(a,' ',sizeof(a));
    reverse(0,0,n);    
    int distance = pow(2,n);
    for(int i = 0;i < distance;i++) {
        for(int j = 0;j < distance * 2;j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}