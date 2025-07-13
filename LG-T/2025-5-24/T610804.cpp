#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int T;
string s;

bool check(const string& s) {
    vector<int> cnt(26,0);
    for(char c : s) {
        cnt[c - 'a']++;
    }
    int ans = 0;
    for(int num : cnt) {
        if(num % 2 != 0) {
            ans++; 
        }
    }
    return ans <= 1;
}

int main()
{
    cin >> T;
    while(T--) {
        cin >> s;
        if(check(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
