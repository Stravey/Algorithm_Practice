// [蓝桥杯 2025 省 B] 产值调整
#include <bits/stdc++.h>
using namespace std;
long long new_a, new_b, new_c;
long long a, b, c, k;
int t;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> k;
        for (int i = 1; i <= k; i++)
        {
            new_a = floor((b + c) / 2);
            new_b = floor((a + c) / 2);
            new_c = floor((a + b) / 2);
            a = new_a;
            b = new_b;
            c = new_c;
            if (a == b && b == c)
            {
                break;
            }
        }
        cout << new_a << " " << new_b << " " << new_c << "\n";
    }
    return 0;
}