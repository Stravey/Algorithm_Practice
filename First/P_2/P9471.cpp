#include <iostream>
#include <cstring>
using namespace std;

string s;
int a = 0,b = 0,c = 0;

int main()
{
    cin >> s;
    for(int i = 0;i < 8;i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            a++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            b++;
        } else if(s[i] >= '0' && s[i] <= '9') {
            c++;
        }        
    }
    cout << c << " " << b << " " << a;
    return 0;
}