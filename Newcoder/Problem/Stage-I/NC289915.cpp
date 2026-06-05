#include <iostream>
using namespace std;

int a[3];

int main()
{
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    int x = abs(a[0] - a[1]);
    int y = abs(a[1] - a[2]);
    if(x + y == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
