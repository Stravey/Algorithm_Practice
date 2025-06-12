#include <iostream>
#include <algorithm>
using namespace std;

int ans,maxDeep; // 结果总用时 最大递归深度
int nowTime,maxTime,sum; // 当前的解题时间 最大时间 结题时间总数
int s[4],a[21]; // 科目数 每个科目的题目解题时间

void dfs(int x) {
    if(x > maxDeep) {
        maxTime = max(maxTime,nowTime);
        return;
    }
    if(nowTime + a[x] <= sum / 2) {
        nowTime += a[x];
        dfs(x + 1);
        nowTime -= a[x];
    }
    dfs(x + 1);
}

int main()
{
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    for(int i = 0;i < 4;i++) {
        nowTime = 0;
        maxDeep = s[i];
        sum = 0;
        for(int j = 1;j <= s[i];j++) {
            cin >> a[j];
            sum += a[j];
        }
        maxTime = 0;
        dfs(1);
        ans += (sum - maxTime);
    }
    cout << ans << endl;
    return 0;
}