#include <iostream>
using namespace std;

int a[1025][1025],n;

// µ›πÈ«–∑÷æÿ’Û
void calculate(int x,int y,int n) {
    if(n == 0) {
        a[x][y] = 1;
    } else {
        calculate(x + (1 << n - 1),y,n - 1); // ”“…œ∑Ωæÿ’Û
        calculate(x,y + (1 << n - 1),n - 1); // ◊Ûœ¬∑Ωæÿ’Û
        calculate(x + (1 << n - 1), y + (1 << n - 1),n - 1); // ”“œ¬∑Ωæÿ’Û
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
