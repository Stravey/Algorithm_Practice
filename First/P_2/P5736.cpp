#include <iostream>
using namespace std;

int a[105],n;

//�ж����� ��򵥵ķ�ʽ
bool check(int x) {
    if(x == 0 || x == 1) {
        return 0;
    } 
    for(int i = 2;i * i <= x;i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
    // ����������ͷ���1�����򷵻�0
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        if(check(a[i])) {
            cout << a[i] << " ";
        }
    }
    return 0;
}