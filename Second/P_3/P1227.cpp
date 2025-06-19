#include <iostream>
#include <cstring>
using namespace std;

int ans = 0;
string s1,s2;

int main() 
{
    cin >> s1 >> s2;
    for(int i = 0;s1[i];i++) {
        for(int j = 1;s2[j];j++) {
            if(s1[i] == s2[j] && s1[i + 1] == s2[j - 1]) {
                ans++;
            }
        }
    }
    cout << (1 << ans) << endl;
    return 0;
}