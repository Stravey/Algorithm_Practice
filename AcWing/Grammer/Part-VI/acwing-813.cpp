#include <bits/stdc++.h>

using namespace std;

int a[105][105];

void print2D(int a[][105], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
    print2D(a, row, col);
    return 0;
}