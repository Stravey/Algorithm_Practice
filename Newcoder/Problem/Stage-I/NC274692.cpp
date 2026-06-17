#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;
long long a[N];

// 本质为找第二大值的数的个数
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int pos = x - 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 找到除去pos的最大值
    long long max_val = 0;
    for (int i = 0; i < n; i++) {
        if(i == pos) continue;
        if(a[i] > max_val) max_val = a[i];
    }
    // 统计数量
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(i == pos) continue;
        if(a[i] == max_val) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}