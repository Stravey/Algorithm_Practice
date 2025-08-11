// P12339 [蓝桥杯 2025 省 B/Python B 第二场] 25 之和
#include <iostream>
using namespace std;

int main()
{
    int n,a = 0;
    cin >> n;
    for(int i = 0;i <= 24;i++) {
        a += i;
    }
    cout << 25 * n + a << endl;
    return 0;
}