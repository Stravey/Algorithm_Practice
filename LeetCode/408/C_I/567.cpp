#include <iostream>
#include <cstring>
using namespace std;
bool checkInclusion(string s1, string s2);
bool check(int l,int r,string s1,string s2);
int a[26] = {0};
int b[26] = {0};
// �ж�һ���ַ����Ƿ����һ���ַ��������Ƿ�Ϊ�ִ���
// �������� + ˫ָ�� 
// ����˼·:�ҵ�Ҫƥ����Ǹ��ַ����е�ÿ����ĸ�ĳ��ִ��� ���Ҽ�����ַ����ĳ���
// ���ݴ˳��� ���廬�����ڴ�С �ڴ˴�С��Ҳͳ��ÿ����ĸ���ֵĴ���
// �����бȽ� ����ͬ ��Ϊ�Ӵ� ��֮ ����
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
    // ͳ�ƻ��������е�ÿ����ĸ���ֵĸ���
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