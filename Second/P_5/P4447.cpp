#include <iostream>
#include <algorithm>
using namespace std;

// 类似蜘蛛纸牌
// 思路：
// 1.从小到大排序
// 2.先找现有的分组，有没有这个数可以插入的位置
// 3.如果有多个可插入的位置，选择长度最小组进行插入
// 4.如果没有可插入的位置，新建一个组
// 5.重复这个过程，直到把所有数据插完

long long mark = 0;

struct team{
    int num;
    int sl;
}ts[100005];

// 插入
void insert(int k) {
    long long find = 0,flag = 0,tnum = 100005;
    for(int i = 0;i < mark;i++) {
        if(ts[i].sl == k - 1) {
            if(ts[i].num < tnum) {
                flag = i;
                find = 1;
                tnum = ts[i].num;
            }
        }
    }
    if(find == 1) {
        ts[flag].sl = k;
        ts[flag].num++;
    } else {
        ts[mark].sl = k;
        ts[mark].num = 1;
        mark++;
    }
}

int main()
{
    long long n,a[100005];
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        insert(a[i]);
    }
    long long ans = ts[0].num;
    for(int i = 1;i < mark;i++) {
        if(ans > ts[i].num) {
            ans = ts[i].num;
        }
    }
    cout << ans << endl;
    return 0;
}