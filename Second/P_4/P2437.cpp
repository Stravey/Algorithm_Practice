#include <iostream>
#include <cstring>
using namespace std;

// 模拟 高精度 递归

int n,m,d = 1,a[5010],b[5010],c[5010];

void func(int step) {
    if (step == 0) {
        a[1] = 1;
        return;
    }
    a[1] = 1,b[1] = 1;
    for(int i = 2;i <= step;i++) {
        for(int j = 1;j <= d;j++) {
            c[j] = a[j] + b[j];
        }
        for(int j = 1;j <= d;j++) {
            if(c[j] > 9) {
                c[j + 1] += c[j] / 10;
                c[j] %= 10;
                if(j + 1 > d) {
                    d++;
                }
            }
        }
        for(int j = 1;j <= d;j++) {
            a[j] = b[j];
        }
        for(int j = 1;j <= d;j++) {
            b[j] = c[j];
        }
    } 
}

int main()
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin >> m >> n;
    int k = n - m;
    if (k < 0) {
        cout << "0" << endl;  
        return 0;
    }
    func(k);
    bool e = true;

    for(int i = d;i > 0;i--) {
        if (e && b[i] == 0) continue;  
        e = false;
        cout << b[i];
    }
    if (e) cout << "0";
    cout << endl;
    return 0;
}