#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// 对每个字符串，删除一个字符，得到字典序最小的结果
string bestDelete(const string& s) {
    int n = s.length();
    // 找到第一个 s[i] > s[i+1] 的位置，删除 s[i]
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            return s.substr(0, i) + s.substr(i + 1);
        }
    }
    // 全程非递减，删除最后一个字符
    return s.substr(1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<string> later;
    for (const string& s : arr) {
        later.push_back(bestDelete(s));
    }
    // 排序规则：a + b < b + a
    sort(later.begin(),later.end(), [](const string& a, const string& b) {
        return a + b < b + a;
    });
    // 拼接结果
    string ans;
    for (const string& t : later) {
        ans += t;
    }
    cout << ans << endl;
    return 0;
}