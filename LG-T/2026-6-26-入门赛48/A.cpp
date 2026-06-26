#include <iostream>
using namespace std;

int main()
{
    int a, b, p, q, m;
    cin >> a >> b >> p >> q >> m;
    int used = a * p + b * q;
    cout << used << endl;
    cout << m - used << endl;
    return 0;
}