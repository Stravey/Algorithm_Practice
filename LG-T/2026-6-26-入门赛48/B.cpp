#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    int cur = h * 60 + m;
    if(cur < 450) {
        cout << "EARLY\n";
    } else if(cur >= 450 && cur <= 480) {
        cout << "ON TIME\n";
    } else {
        cout << "LATE\n";
    }
    return 0;
}