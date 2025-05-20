#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

string s;
int cnt = 0;

int main()
{
    //输入使用getline不会忽略空格后的内容
    getline(cin,s);
/*     for(int i = 0;i < s.length();i++) {
        if(s[i] != ' ' && s[i] != '\n') {
            cnt++;
        }
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z')) {
            cnt++;
        } 
    }  */
    for(char c : s) {
        if(isalnum(c)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}