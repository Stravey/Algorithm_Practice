#include <iostream>
#include <string>
using namespace std;

bool check(string word, char c) {
    for(auto f : word) {
        if(f == c) {
            return true;
        }
    }
    return false;
}

int main()
{
    char c;
    cin >> c;
    cin.ignore();
    string s;
    getline(cin, s);
    int n = s.length();
    int cnt = 0;
    int left = 0;
    // 分割字符串的每个单词
    while(left < n) {
        // 找单词左边界 
        while(left < n && s[left] == ' ') {
            left++;
        }
        if(left >= n) {
            break;
        }
        // 找单词右边界
        int right = left;
        while(right < n && s[right] != ' ') {
            right++;
        }
        // 对每个单词进行判断
        string ans = s.substr(left, right - left);
        if(check(ans, c)) {
            cnt++;
        }
        left = right;
    }
    cout << cnt << endl;
    return 0;
}