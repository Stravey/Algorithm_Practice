#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int target_s[256] = {0};
    string target_str = "Kato_Shoko";
    for(char c : target_str) {
        target_s[c]++;
    }
    
    int in_s[256] = {0};
    for(char c : s) {
        in_s[c]++;
    }

    bool mark = true;
    for(char c : target_str) {
        if(in_s[c] < target_s[c]) {
            mark = false;
            break;
        }
    }

    if(!mark) {
        cout << "NO" << endl;
    } else {
        int len = target_str.length();
        cout << "YES " << n - len << endl;
    }
    return 0;
}