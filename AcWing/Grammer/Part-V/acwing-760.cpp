#include <iostream>
#include <cstring>
using namespace std;

// 法1
void solve_1() {
    string s;
    getline(cin, s);
    cout << s.size() << endl;
}

// 法2
void solve_2() {
    char s[105];
    cin.get(s, 105);
    cout << strlen(s) << endl;
}

int main()
{
    // cin 和 scanf读入字符串时遇到空格就停止了 所以不能用cin和scanf
    
    // solve_1();
    
    solve_2();
    
    return 0;
}