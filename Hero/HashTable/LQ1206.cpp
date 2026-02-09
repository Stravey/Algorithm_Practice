#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
// 字符串统计
int main()
{
    unordered_map<string, int> cnt;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        string s;
        cin >> s;
        // 赋值可以任意值
        cnt[s] = 1;
    }
    cout << cnt.size() << endl;
    return 0;
}
