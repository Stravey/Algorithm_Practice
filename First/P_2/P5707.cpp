#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int s,v,walk_time,total_time,target,hour,minute;

int main()
{
    cin >> s >> v;
    target = 8 * 60 + 24 * 60;
    walk_time = (s + v - 1) / v;
    total_time = walk_time + 10;
    target -= total_time;
    if(target >= 24 * 60) {
        target -= 24 * 60;
    }
    hour = target / 60;
    minute = target % 60;
    cout << setw(2) << setfill('0') << hour << ":" << setfill('0') << minute << endl; 
    return 0;
}

// AC´úÂë
/* #include <iostream>
#include <cmath>
using namespace std;

double s, v, m;
int n, a, t, b;

int main(void)
{
    std::cin >> s >> v;
    n = 8 * 60 + 24 * 60;
    t = ceil(s / v) + 10;
    n -= t;
    if (n >= 1440) {
        n -= 1440;
    }
    a = n / 60;
    b = n % 60;
    if (a < 10) {
        if (b < 10) {
            cout << 0 << a << ":0" << b;
        }
        else {
            cout << 0 << a << ":" << b;
        }
    }
    else {
        if (b < 10) {
            cout << a << ":0" << b;
        }
        else {
            cout << a << ":" << b;
        }
    }
    cout << '\n';
    return 0;
} */