#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = 3 * x + y;
    int b = z / a;
    int c = z % a;
    int day = b * 3;
    if(c > 0) {
        if(c <= x + y) {
            day += 1;
        } else if(c <= 2 * x + y) {
            day += 2;
        } else {
            day += 3;
        }
    }
    cout << day << endl;
    return 0;
}