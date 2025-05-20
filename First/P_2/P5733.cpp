#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

string s;

int main()
{
    cin >> s;
    for(char& c : s) {
        c = toupper(static_cast<unsigned char>(c));
    }
    cout << s << endl;
    return 0;
}