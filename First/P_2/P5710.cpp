#include <iostream>
using namespace std;

int x;
bool a,b;

int main()
{
    cin >> x;
    a = (x % 2 == 0);
    b = (x > 4 && x <= 12);
    cout << (a & b) << " " << (a | b) << " " << (a & !b || !a & b) << " " << (!a & !b) << endl;
    return 0;
}
