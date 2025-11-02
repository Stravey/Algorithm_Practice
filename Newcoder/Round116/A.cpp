#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a > c && b < d) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    return 0;
}