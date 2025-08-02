#include <iostream>
#include <cstring>
using namespace std;

bool check(const string& s1,const string& s2) {
    int i = 0, j = 0;
    while (i < s1.size() && j < s2.size()) {
        if (s1[i] == s2[j]) {
            i++;
        }
        j++;
    }
    return i == s1.size();
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        string s1,s2;
        cin >> n >> m;
        cin >> s1 >> s2;
        if(check(s1,s2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}