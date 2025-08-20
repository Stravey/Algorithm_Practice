// P12140 [蓝桥杯 2025 省 A] 抽奖
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a[1005],b[1005],c[1005],ans = 0;
int x1,x2,x3;
struct cnt{
    int x,y,z;
};
cnt cn[1005];
// 第一个奖项
bool size1() {
    if(a[x1] == b[x2] && b[x2] == c[x3]) {
        ans += 200;
        return 1;
    }
    return 0;
}
// 第二个奖项
bool size2() {
    if(a[x1] == b[x2] || b[x2] == c[x3] || a[x1] == c[x3]) {
        ans += 100;
        return 1;
    }
    return 0;
}
// 第三个奖项
bool size3() {
    if(a[x1] + 1 == b[x2] && b[x2] + 1 == c[x3]) {
        ans += 200;
        return 1;
    }
    return 0;
}
// 第四个奖项
bool size4() {
    int s[3] = {a[x1],b[x2],c[x3]};
    sort(s, s + 3);
    if(s[0] + 1 == s[1] && s[1] + 1 == s[2]) {
        ans += 100;
        return 1;
    }
    return 0;
}
int main()
{  
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> c[i];
    }
    cin >> m;
    for(int i = 1;i <= m;i++) {
        cin >> cn[i].x >> cn[i].y >> cn[i].z;
    }
    for(int i = 1;i <= m;i++) {
        x1 += cn[i].x,x1 %= n;
        x2 += cn[i].y,x2 %= n;
        x3 += cn[i].z,x3 %= n;
        if(size1()) continue;
        if(size2()) continue;
        if(size3()) continue;
        if(size4()) continue;
    }
    cout << ans << endl;
    return 0;
}