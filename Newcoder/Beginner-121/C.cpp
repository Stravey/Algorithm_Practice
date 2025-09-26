#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n,d;
    string s;
    cin >> n >> d >> s;
    sort(s.begin(),s.end());

    string little = "";
    bool found = false;

    for (int mask = 1; mask < (1 << n); ++mask) {
        vector<char> set;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                set.push_back(s[i]);
            }
        }
        sort(set.begin(), set.end());
        do {
            int num = 0;
            for (char c : set) {
                num = (num * 10 + (c - '0')) % d;
            }
            
            if (num == 0) {
                string cur(set.begin(), set.end());
            
                if (!found) {
                    little = cur;
                    found = true;
                } else {
                    if (cur.length() < little.length() || 
                        (cur.length() == little.length() && cur < little)) {
                        little = cur;
                    }
                }
            }
        } while (next_permutation(set.begin(), set.end()));
    }
    
    if (found) {
        cout << little << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}