#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 判断数组是否是递增顺序排序
// bool isSortedUp(vector<int>& a) {
//     for(int i = 1; i < a.size(); i++) {
//         if(a[i] > a[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // 第一次
    // 交换数组中的元素
    // 我们可以从后往前处理
    // 对于任意索引 i，如果 2i ≤ n，我们可以交换 a[i] 和 a[2i]
    // 这意味着我们可以将任何元素"下沉"到合适的位置
    // 堆核心思想的模拟
    // for(int i = n; i >= 1; i--) {
    //     int m = 2 * i;
    //     if(m <= n) {
    //         if(a[i] > a[m]) {
    //             swap(a[i], a[m]);
    //         }
    //         m = 2 * i + 1;
    //         if(m <= n && a[i] > a[m]) {
    //             swap(a[i], a[m]);
    //         }
    //     }
    // }
    
    // 第二次
    // for(int i = n / 2; i >= 1; i--) {
    //     // 确保左子节点 >= 当前节点
    //     if(2 * i <= n && a[i] > a[2 * i]) {
    //         swap(a[i], a[2 * i]);
    //     }
    // }

    // 处理每个链 (i, 2i, 4i , ...)
    for(int i = 1; i <= n; i++) {
        vector<int> temp; // 存当前链的元素
        vector<int> pos;   // 存当前链的位置
        int j = i;
        while(j <= n) {
            temp.push_back(a[j]);
            pos.push_back(j);
            j *= 2;
        }
        sort(temp.begin(), temp.end());
        for(int k = 0; k < temp.size(); ++k) {
            a[pos[k]] = temp[k];
        }
    }

    // 检查是否严格递增
    bool flag = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i + 1]) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        
        solve();

    }
    return 0;
}