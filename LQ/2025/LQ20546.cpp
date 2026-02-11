#include <iostream>
#include <vector>
using namespace std;
// 给定数 x 的二进制表示中 1 的次数
// Brian Kernighan
int bitCount(int x) {
    int cnt = 0;
    while(x) {
        x &= (x - 1);
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    // n 个数 m 次变换 因此是二重循环
    for(int t = 0;t < m;t++) {
        for(int i = 0;i < n;i++) {
            a[i] = a[i] * bitCount(a[i]);
        }
    }
    for(int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}