#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        for(char& c : s) {
            c = toupper(c);
        }
        if(s == "YES") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}