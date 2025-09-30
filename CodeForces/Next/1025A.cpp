#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int freq[26] = {0};
    for(char c : s) {
        freq[c - 'a']++;
    }
    if(n == 1) {
        cout << "Yes" << endl;
    } else {
        bool flag = false;
        for(int cnt : freq) {
            if(cnt >= 2) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}