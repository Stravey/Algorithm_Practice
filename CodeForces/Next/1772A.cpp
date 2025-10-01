#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        cout << a + b << endl;
    }
    return 0;
}