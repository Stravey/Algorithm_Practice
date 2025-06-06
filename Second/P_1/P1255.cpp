#include <iostream>
#include <cstring>
using namespace std;

int n,m = 1,a[5010],b[5010],c[5010];

// 高精度加法  范围为 5000 阶

void func() {
    a[1] = 1,b[1] = 2;
    for(int i = 3;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            c[j] = a[j] + b[j];
        }
        for(int j = 1;j <= m;j++) {
            if(c[j] > 9) {
                c[j + 1] += c[j] / 10;
                c[j] %= 10;
                if(j + 1 > m) {
                    m++;
                }
            }
        }
        for(int j = 1;j <= m;j++) {
            a[j] = b[j];
        }
        for(int j = 1;j <= m;j++) {
            b[j] = c[j];
        }
    }
}

int main()
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin >> n;
    if(n < 3) {
        cout << n << endl;
        return 0;
    }
    func();
    for(int i = m;i > 0;i--) {
        cout << b[i];
    }
    return 0;
}