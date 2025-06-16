#include <iostream>
using namespace std;

int main() {
    int t = 0;
    char ch;
    while ((ch = getchar()) != '@') {
        if (ch == '(') {
            t++;
        } else if (ch == ')') {
            t--;
            if (t < 0) break; // 右括号多于左括号，直接退出
        }
    }
    cout << (t == 0 ? "YES" : "NO") << endl;
    return 0;
}