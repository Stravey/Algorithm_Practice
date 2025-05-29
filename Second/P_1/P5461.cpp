#include <iostream>
using namespace std;

int a[1025][1025],n;

// �ݹ��з־���
void calculate(int x,int y,int n) {
    if(n == 0) {
        a[x][y] = 1;
    } else {
        calculate(x + (1 << n - 1),y,n - 1); // ���Ϸ�����
        calculate(x,y + (1 << n - 1),n - 1); // ���·�����
        calculate(x + (1 << n - 1), y + (1 << n - 1),n - 1); // ���·�����
    }
}

int main()
{
    cin >> n;
    calculate(0,0,n);
    int size = 1 << n;
    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
