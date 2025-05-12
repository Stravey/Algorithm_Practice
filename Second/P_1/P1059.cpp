#include <iostream>
#include <algorithm>
using namespace std;

int n,a[1005],cnt;

int main()
{
    cin >> n;
    cnt = n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    // 让数组是单调有序递增的
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        // 如果相等总数就减1 前提数组是单调有序递增的
        if(a[i + 1] == a[i]) {
            cnt--;
        }
    }
    cout << cnt << endl;
    for(int i = 0;i < n;i++) {
        // 如果不相等就输出 前提数组是单调有序递增的
        if(a[i + 1] != a[i]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}