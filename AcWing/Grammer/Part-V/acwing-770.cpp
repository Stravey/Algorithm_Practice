#include <bits/stdc++.h>
#include <regex>

using namespace std;


int main()
{
    string s, s1, s2;
    getline(cin, s);
    cin >> s1 >> s2;
    // 使用正则表达式
    cout << regex_replace(s, regex("\\b" + s1 + "\\b"), s2) << endl;
    return 0;
}