#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main()
{
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    if(a[0] + a[1] >= a[2]) {
        cout << (a[0] + a[1]) << endl;
        return 0;
    } else {
        cout << a[2] << endl;
    }
    return 0;
}