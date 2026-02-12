#include <iostream>
#include <string>
using namespace std;
bool isYuanYin(char c) {
    return c == 'a' || c == 'e' ||  c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    string s, ret;
    cin >> s;
    ret = "(";
    bool flag = false;
    int cnt = 0;
    for(int i = 0;i < s.size();i++) {
        if(isYuanYin(s[i])) {
            cnt++;
            flag = true;
            if(cnt > 1) {
                ret += ")";
                ret += "(";
                cnt = 1;
            }
        }
        ret += s[i];
    }
    ret += ")";
    if(flag == false) {
        ret = s;
    }
    cout << ret << endl;
    return 0;
}