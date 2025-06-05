#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int a[25];

int main()
{
    int n,r;
    cin >> n >> r;
    // 枚举全集
    for(int S = (1 << n) - 1;S >= 0;S--) {
        int cnt = 0;
        for(int i = 0;i < n;i++) {
            if(S & (1 << i)) {
                a[cnt++] = i; // 记录每一位
            }
        }
        if(cnt == r) {
            // 高位表示1 反向输出
            for(int i = r - 1;i >= 0;i--) {
                cout << setw(3) << n - a[i];
            }
            cout << endl;
        }
    }
    return 0;
}