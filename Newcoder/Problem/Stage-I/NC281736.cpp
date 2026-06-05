#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = n / a;
    int y = n / b;
    if(x > y) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }
    return 0;
}