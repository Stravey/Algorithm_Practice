#include <iostream>
using namespace std;

// 以下方法只能过80% 100%要高精度

long long n,k,ans = 0,a[25];

long long sum_g(long long x) {
    long long tmp = 1;
    while(x != 0) {
        tmp *= x % 10;
        x /= 10;
    }
    return tmp;
}

int main()
{
    cin >> n >> k;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        if(sum_g(a[i]) <= k) {
            cout << "kawaii" << endl;
        } else {
            cout << "dame" << endl;
        }
    }
    return 0;
}