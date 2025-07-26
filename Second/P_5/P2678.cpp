#include <iostream>
using namespace std;

// 二分答案方法

int main()
{   
    int length,n,m,a[50005],left,right,now,before = 0;
    cin >> length >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> now;
        a[i] = now - before;
        before = now;
    }
    a[n] = length - before;
    left = 1;
    // 石头数等于被移走的石头数
    if(n == m) {
        cout << length << endl;
        return 0;
    }
    right = length / (n - m + 1);
    while(left <= right) {
        int mid = (left + right) / 2,tmp,count = 0;
        for(int i =0;i <= n;i++) {
            tmp = a[i];
            while(tmp < mid && i < n) {
                i++;
                tmp += a[i];
                count++;
            }
        }
        if(count <= m) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << right << endl;
    return 0;
}