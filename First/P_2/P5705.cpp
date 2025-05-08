#include <iostream>
#include <cstring>
using namespace std;

string s;

int main()
{
    cin >> s;
    int len = s.length() - 1;
    for(int i = len;i >= 0;i--)
    {
        cout << s[i];
    }
    return 0;
}