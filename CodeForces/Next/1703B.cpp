#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        unordered_set<char> set;
        int cnt = 0;
        for(char c : s) {
            cnt += 1;
            if(set.find(c) == set.end()) {
                cnt += 1;
                set.insert(c);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}