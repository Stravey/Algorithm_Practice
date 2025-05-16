#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long p;
    cin >> p;
    if(p % 2 == 0) {
        cout << (p / 2) << endl;
    } else {
        cout << ceil(p * 1.0 / 2) - 1 << endl;
    }
    return 0;
}