#include <iostream>
using namespace std;

int a[105],n;

//判断质数 最简单的方式
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
    // 如果是质数就返回1，否则返回0
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