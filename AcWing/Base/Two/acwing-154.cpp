// 单调队列实现
#include <iostream>

using namespace std;

const int N = 1000010;

int n, k;
int a[N], q[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    // 最小值
    int hh = 0, tt = -1;
    for(int i = 0; i < n; i++) {
        // 判断队头是否已经划出窗口
        if(hh <= tt && i - k + 1 > q[hh]) {
            hh++;
        }
        while(hh <= tt && a[q[tt]] >= a[i]) {
            tt--;
        }
        q[ ++ tt] = i;
        if(i >= k - 1) {
            cout << a[q[hh]] << " ";
        }
    }
    
    cout << endl;
    
    // 最大值
    hh = 0, tt = -1;
    for(int i = 0; i < n; i++) {
        // 判断队头是否已经划出窗口
        if(hh <= tt && i - k + 1 > q[hh]) {
            hh++;
        }
        while(hh <= tt && a[q[tt]] <= a[i]) {
            tt--;
        }
        q[ ++ tt] = i;
        if(i >= k - 1) {
            cout << a[q[hh]] << " ";
        }
    }
    
    return 0;
}