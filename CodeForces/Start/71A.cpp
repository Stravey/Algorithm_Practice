#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); 
        int len = s.length();
        if (len > 10) {
            cout << s[0] << len - 2 << s[len - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}