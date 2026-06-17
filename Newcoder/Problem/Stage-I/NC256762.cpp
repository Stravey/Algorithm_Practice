#include <iostream>
using namespace std;

// 本质是遍历统计个数
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0' || s[i] == '6' || s[i] == '9') {
            cnt++;
        }
        if(s[i] == '8') {
            cnt += 2;
        }
    }
    cout << cnt << endl;
    return 0;
}