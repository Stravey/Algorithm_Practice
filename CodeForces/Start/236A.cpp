#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool freq[26];
    memset(freq,0,sizeof(freq));
    int cnt = 0;
    for(char c : s) {
        if(!freq[c]) {
            freq[c] = true;
            cnt++;
        }
    }
    if(cnt % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}