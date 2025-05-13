#include <iostream>
using namespace std;

int a,b;
char c;

int main()
{
    cin >> a >> b >> c;
    if (c != '+' && c != '-' && c != '*' && c != '/') {
        cout << "Invalid operator!" << endl;
    } else if (c == '/' && b == 0) {
        cout << "Divided by zero!" << endl;
    } else {
        switch (c) {
            case '+': cout << a + b << endl; break;
            case '-': cout << a - b << endl; break;
            case '*': cout << a * b << endl; break;
            case '/': cout << a / b << endl; break;
        }
    }
    return 0;
}