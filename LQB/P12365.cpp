//P12365 [¿∂«≈±≠ 2022  ° Python B] ÷Ω’≈≥ﬂ¥Á
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s[1] - '0';
    int x = 1189;
    int y = 841;
    for(int i = 1;i <= n;i++) {
        int xx = x;
        x = y;
        y = xx / 2;
    }
    cout << x << endl;
    cout << y << endl;
    return 0;
}