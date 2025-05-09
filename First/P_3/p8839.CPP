#include <iostream>
using namespace std;

int t,e,h;
int w = 0;

int main()
{
    cin >> t >> e >> h;
    w = 0.2 * t + 0.3 * e + 0.5 * h;
    cout << w << endl;
    return 0;
}