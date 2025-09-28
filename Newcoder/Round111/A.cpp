#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a + 1 == b && b + 1 == c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}