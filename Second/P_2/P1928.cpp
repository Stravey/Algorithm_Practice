#include <iostream>
#include <cstring>
using namespace std;

// ×´Ì¬Ñ¹Ëõ
string append() {
    string s = "",x;
    char c;
    int D;
    while(cin >> c) {
        if(c == '[') {
            cin >> D;
            x = append();
            while(D--) {
                s += x;
            }
        } else if(c == ']') {
            return s;
        } else {
            s += c;
        }
    }
    return s;
}

int main()
{
    cout << append() << endl;
    return 0;
}