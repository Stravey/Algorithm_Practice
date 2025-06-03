#include <iostream>
#include <cstring>
#include <algorithm>
#define max_n 25
using namespace std;

int n;

struct node {
    string x; // 票数
    int num; // 票号
    int ans; // 装票的位数
}a[max_n];

bool cmp(node a,node b) {
    if(a.ans > b.ans) {
        return 1;
    }
    if(a.ans == b.ans && a.x > b.x) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].x;
        a[i].num = i;
        a[i].ans = a[i].x.size();
    }
    sort(a + 1,a + n + 1,cmp);
    cout << a[1].num << endl;
    cout << a[1].x << endl;
    return 0;
}