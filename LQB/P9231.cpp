// P9231 [蓝桥杯 2023 省 A] 平方差
#include <iostream>
using namespace std;

// 小于等于 x 的奇数个数 
int odd(int x) {
    if(!x) {
        return 0;
    }
    return (x + 1) / 2;
}

// 小于等于 x 的 4 的倍数个数 
int even(int x) {
    return x / 4;
}

int main()
{
    int l,r,a,b;
    cin >> l >> r;
    a = odd(r) - odd(l - 1);
    b = even(r) - even(l - 1);
    cout << a + b << endl;
    return 0;
}