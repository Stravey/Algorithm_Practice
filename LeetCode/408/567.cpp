#include <iostream>
#include <cstring>
using namespace std;
bool checkInclusion(string s1, string s2);
bool check(int l,int r,string s1,string s2);
int a[26] = {0};
int b[26] = {0};
// 判断一个字符串是否包含一个字符串（即是否为字串）
// 滑动窗口 + 双指针 
// 具体思路:找到要匹配的那个字符串中的每个字母的出现次数 并且计算此字符串的长度
// 根据此长度 定义滑动窗口大小 在此大小内也统计每个字母出现的次数
// 最后进行比较 若相同 则为子串 反之 则不是
bool checkInclusion(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    for(int i = 0;i < n;i++) {
        a[s1[i] - 'a']++;
    }
    for(int i = 0;i < m - n + 1;i++) {
        memset(b,0,sizeof(b));
        int l = i;
        int r = i + n - 1;
        if(check(l,r,s1,s2)) {
            return true;
        }
    }
    return false;
}
bool check(int l,int r,string s1,string s2) {
    // 统计滑动窗口中的每个字母出现的个数
    for(int i = l;i <= r;i++) {
        b[s2[i] - 'a']++;
    }
    for(int i = 0;i < 26;i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    string a = "abcd";
    string b = "abcde";
    cout << checkInclusion(a,b);
    //cout << "Hello World!" << endl;
    return 0;
}