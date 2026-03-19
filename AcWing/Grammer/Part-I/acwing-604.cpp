#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159;

int main()
{
    double r;
    cin >> r;
    double ans = pi * r * r;
    // C++输出 保留n位小数
    cout << "A=" << fixed << setprecision(4) << ans << endl; 
    return 0;
}
