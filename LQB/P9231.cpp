// P9231 [���ű� 2023 ʡ A] ƽ����
#include <iostream>
using namespace std;

// С�ڵ��� x ���������� 
int odd(int x) {
    if(!x) {
        return 0;
    }
    return (x + 1) / 2;
}

// С�ڵ��� x �� 4 �ı������� 
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