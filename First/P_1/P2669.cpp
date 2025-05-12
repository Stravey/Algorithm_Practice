#include <iostream>
using namespace std;

// k 天数
// ans 结果
// num 第 k 天有 num 个金币
// days 还剩几天
int k,ans,num,days;

int main()
{
    cin >> k;
    num = days = 1;
    for(int i = 1;i <= k;i++) {
        ans += num;
        days--;
        if(days == 0) {
            num++;
            days = num;
        }
    }
    cout << ans;
    return 0;
}