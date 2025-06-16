#include <iostream>
using namespace std;

int n,m;
char c;

void solve()
{
    cin >> n >> c >> m;
    switch(c) {
        case '+':
            cout << n + m << endl;
            break;
        case '-':
            cout << n - m << endl;
            break;
        case '*':
            cout << n * m << endl;
            break;
        case '/':
            cout << n / m << endl;
            break;
        case '%':
            cout << n % m << endl;
            break;
    }
}

int main()
{
    solve();
    return 0;
}