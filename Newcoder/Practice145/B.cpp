#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// ��ÿ���ַ�����ɾ��һ���ַ����õ��ֵ�����С�Ľ��
string bestDelete(const string& s) {
    int n = s.length();
    // �ҵ���һ�� s[i] > s[i+1] ��λ�ã�ɾ�� s[i]
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            return s.substr(0, i) + s.substr(i + 1);
        }
    }
    // ȫ�̷ǵݼ���ɾ�����һ���ַ�
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
    // �������a + b < b + a
    sort(later.begin(),later.end(), [](const string& a, const string& b) {
        return a + b < b + a;
    });
    // ƴ�ӽ��
    string ans;
    for (const string& t : later) {
        ans += t;
    }
    cout << ans << endl;
    return 0;
}