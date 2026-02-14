#include <iostream>
#include <cstring>
using namespace std;
int slideWindow(int n, int* a) {
    int i = 0, j = 0;  // i为左指针，j为右指针
    int cnt[1001] = {0};  // 假设元素值范围是1-1000
    int need = 0, tot = 0;  // need：需要的不同元素总数，tot：当前窗口的不同元素数
    int ans = n;  // 初始化为最大可能长度
    // 第一步：统计所有不同元素的数量
    for(int k = 0; k < n; k++) {
        if(cnt[a[k]] == 0) {
            need++;
        }
        cnt[a[k]]++;
    }
    // 重置计数器
    memset(cnt, 0, sizeof(cnt));
    // 第二步：滑动窗口找最小覆盖子串
    while(j < n) {
        // 扩展右边界
        if(cnt[a[j]] == 0) {
            tot++;
        }
        cnt[a[j]]++;
        j++;
        // 当窗口包含所有不同元素时，尝试收缩左边界
        while(tot == need && i < j) {
            ans = min(ans, j - i);  // 更新最小长度
            // 收缩左边界
            cnt[a[i]]--;
            if(cnt[a[i]] == 0) {
                tot--;
            }
            i++;
        }
    }
    return ans;
}
int a[100001];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = slideWindow(n, a);
    cout << ans << endl;
    return 0;
}