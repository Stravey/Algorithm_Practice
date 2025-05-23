#include <iostream>
#include <cstring>
using namespace std;

string s;
bool p1,p2;

int main()
{
    getline(cin,s);
    for(int i = 0,l = s.length();i < l;i++) {
        if(s[i] == '\\' && s[i + 1] == 'r') {
            p1 = 1;
        } else if(s[i] == '\\' && s[i + 1] == 'n') {
            p2 = 1;
        } 
        if(p1 && p2) {
            cout << "windows" << endl;
            return 0;
        }
    }
    if(p2) {
        cout << "linux" << endl;
    } else {
        cout << "mac" << endl;
    }
    return 0;
}