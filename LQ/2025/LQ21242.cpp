#include <iostream>
#include <string>
using namespace std;
int func(string s) {
    bool m1 = false, m2 = false, m3 = false;
    int sum = 0;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] <= 'z' && s[i] >= 'a') {
            m1 = true;
            if(s[i] == 'o') {
                a++;
            }
        }
        if(s[i] <= 'Z' && s[i] >= 'A') {
            m2 = true;
            if(s[i] == 'O') {
                b++;
            }
        }
        if(s[i] <= '9' && s[i] >= '0') {
            m3 = true;
            if(s[i] == '0') {
                c++;
            }
        }
    }
    sum = a + b + c;
    int missing = 0;
    if(m1 == false) {
        missing++;
    }
    if(m2 == false) {
        missing++;
    }
    if(m3 == false) {
        missing++;
    }
    if(sum >= missing) {
        return missing;
    } else {
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[101];
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[i] = func(s);
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}