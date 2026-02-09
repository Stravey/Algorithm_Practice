#include <iostream>
#include <cstring>
using namespace std;
// 字符统计
int main()
{
    string s;
    cin >> s;
    // 初始化hash数组
    int hash[256] = {0};
    for(int i = 0;i < s.size();i++) {
        hash[s[i]]++;
    }
    // 结果数组
    char ret[256];
    int retSize = 0;
    int maxc = 0;
    for(char c = 'A'; c <= 'Z';c++) {
        if(hash[c] > maxc) {
            maxc = hash[c];
            retSize = 0;
            // 出现次数最多的字符放入ret中
            ret[retSize++] = c;
        } else if(hash[c] == maxc) {
            ret[retSize++] = c;
        }
    }
    // 转为字符串输出
    ret[retSize] = '\0';
    cout << ret << endl;
    return 0;
}