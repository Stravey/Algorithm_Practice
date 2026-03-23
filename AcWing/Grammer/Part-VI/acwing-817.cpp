#include <bits/stdc++.h>

using namespace std;

int a[1005];

// 返回数组前n个数中的不同数的个数
int get_unique_count(int a[], int n) {
    int cnt = 0;
    sort(a, a + n);
    for(int i = 1; i <= n; i++) {
        if(a[i] != a[i - 1]) {
            cnt++;
        }
    }
    return cnt;
}  

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << get_unique_count(a, n) << endl;
    return 0;
}