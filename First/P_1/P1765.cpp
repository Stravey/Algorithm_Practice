#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] == 't' || s[i] == 'w') {
            a += 1;
        }
        if (s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x') {
            a += 2;
        }
        if (s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y') {
            a += 3;
        }
        if (s[i] == 's' || s[i] == 'z') {
            a += 4;
        }
    }
    cout << a << endl;
    return 0;
}