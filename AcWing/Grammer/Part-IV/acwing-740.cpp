#include <iostream>
using namespace std;
int a[25];
int main()
{
    for(int i = 0; i < 20; i++) {
        cin >> a[i];
    }
    for(int i = 20 - 1; i >= 0; i--) {
        cout << "N[" << 20 - i - 1 << "] = " << a[i] << endl;
    }
    return 0;
}