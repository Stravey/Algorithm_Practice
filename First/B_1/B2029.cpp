#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

int h,r;
int a,ans;

int main()
{
    cin >> h >> r;
    // 向上取整
    ans = (20000 + (pi * r * r * h - 1))/ (pi * r * r * h);
    cout << ans;
    return 0;
}