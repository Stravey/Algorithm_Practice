#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

stack<int> s;
string c;

// 后缀表达式 逆波兰表达式
int main()
{
    cin >> c;
    int a = 0,b = 0;
    int i,j;
    for(int k = 0;k < c.length();k++) {
        if(c[k] == '@') {
            break;
        } else if(c[k] == '.') {
            s.push(a);
            b = 0;
            a = 0;
        } else if(c[k] <= '9' && c[k] >= '0') {
            a = b * 10 + c[k] - '0';
            b = a;
        } else {
            i = s.top();
            s.pop();
            j = s.top();
            s.pop();
            if(c[k] == '-') {
                s.push(j - i);
            }
            if(c[k] == '+') {
                s.push(j + i);
            }
            if(c[k] == '*') {
                s.push(j * i);
            }
            if(c[k] == '/') {
                s.push(j / i);
            }
        }
    }
    cout << s.top() << endl;
    return 0;
}