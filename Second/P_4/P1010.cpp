#include <iostream>
using namespace std;

int a[20];

void func(int x) {
    if (x == 0) {
        cout << "0";
        return;
    }
    // 生成2的幂次方数组
    a[0] = 1;
    for(int i = 1; i < 20; i++) {
        a[i] = a[i - 1] * 2;
    }
    // 找到最大的幂次
    int flag = 0;
    while(flag < 20 && x >= a[flag]) {
        flag++;
    }
    flag--;
    // 处理当前幂次
    if(flag == 1) {
        cout << "2";
    } else {
        cout << "2(";
        func(flag);
        cout << ")";
    }
    // 处理剩余部分
    x -= a[flag];
    if(x != 0) {
        cout << "+";
        func(x);
    }
}

int main()
{
    int n;
    cin >> n;
    func(n);
    return 0;
}