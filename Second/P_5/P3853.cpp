#include <iostream>
using namespace std;

// 二分答案

int main()
{
    int length,n,k,a[100005],now,before = 0,left = 1,right = 0;
    cin >> length >> n >> k;
    // 预处理数据
    for(int i = 0;i < n;i++) {
        cin >> now;
        a[i] = now - before;
        before = now;
        if(right < a[i]) {
            right = a[i];
        }
    }
    a[n] = length - before;
    if(right < a[n]) {
        right = a[n];
    }
    // 判断边界
    if(k == 0){
        cout << right << endl;
        return 0;
    }
    // 二分
    while(left <= right) {
        int mid = (left + right) / 2,count = 0,tmp;
        for(int i = 0;i <= n;i++) {
            tmp = a[i];
            // 距离大于时插入石头
            while(tmp > mid) {
                count++;
                tmp -= mid;
            }
        }
        if(count <= k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    // 输出结果
    cout << left << endl;
    return 0;
}
