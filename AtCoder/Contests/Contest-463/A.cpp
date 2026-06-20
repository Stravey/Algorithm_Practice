#include <iostream>
using namespace std;

// 数学问题
int main()
{
    int x, y;
    cin >> x >> y;
    if(9 * x == 16 * y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}