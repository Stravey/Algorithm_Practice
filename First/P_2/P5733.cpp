#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

string s;

/* int main()
{
    cin >> s;
    for(char& c : s) {
        c = toupper(static_cast<unsigned char>(c));
    }
    cout << s << endl;
    return 0;
} */

int main()
{
    char a[110];
    cin >> a;
    for(int i = 0;a[i] != '\0';i++) {
        if('a' <= a[i] && a[i] <= 'z') {
            a[i] -= 'a' - 'A';
        }
    }
    cout << a;
    return 0;
}