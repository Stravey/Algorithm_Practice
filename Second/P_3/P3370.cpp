#include <iostream>
#include <vector>
#include <cstring>
#define mod 23333
using namespace std;

int n,x,ans = 0;
// 字符串数组
char s[1510];
// 哈希的基数  hash = (hash * k + s[i]) % mod
#define k 261
vector<string> linker[mod + 2];

inline void insert() {
    int hash = 1;
    for(int i = 0;s[i];i++) {
        hash = (hash * 111 * k + s[i]) % mod;
    }
    string t = s;
    for(int i = 0;i < linker[hash].size();i++) {
        if(linker[hash][i] == t) {
            return;
        }
    }
    linker[hash].push_back(t);
    ans++;
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> s;
        insert();
    }
    cout << ans << endl;
    return 0;
}