// P8635 [蓝桥杯 2016 省 AB] 四平方和
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    for(int i = 0;i * i <= n;i++) {
        for(int j = i;i * i + j * j <= n;j++) {
            for(int k = j;i * i + j * j + k * k <= n;k++) {
                int remain = n - (i * i + j * j + k * k);
                int d = sqrt(remain);
                if(d * d == remain && d >= k) {
                    cout << i << " " << j << " " << k << " " << d << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}