#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<char> a, b, c;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] <= 'Z' && s[i] >= 'A') {
            c.push_back(s[i]);
        }
        if(s[i] <= '9' && s[i] >= '0') {
            b.push_back(s[i]);
        }
        if(s[i] <= 'z' && s[i] >= 'a') {
            a.push_back(s[i]);
        } 
    }
    for(int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
    for(int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    for(int i = 0; i < c.size(); i++) {
        cout << c[i];
    }
    return 0;
}