#include <iostream>
#include <vector>
#define mod 23333
using namespace std;

int n,ans = 0;
char a[12],b[12];
vector<pair<int,int>> linker[mod + 2];

inline int gethash(char a[],char b[]) {
    return (a[0] - 'A') + (a[1] - 'A') * 26 + (b[0] - 'A') * 26 * 26 + (b[1] - 'A') * 26 * 26 * 26;
}

inline void insert(int x) {
    for(int i = 0;i < linker[x % mod].size();i++) {
        if(linker[x % mod][i].first == x) {
            linker[x % mod][i].second++;
            break;
        }
    }
    linker[x % mod].push_back(pair<int,int> (x,1));
}

inline int find(int x) {
    for(int i = 0;i < linker[x % mod].size();i++) {
        if(linker[x % mod][i].first == x) {
            return linker[x % mod][i].second;
        }
    }
    return 0;
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a >> b;
        a[2] = 0;
        if(a[0] != b[0] || a[1] != b[1]) {
            ans += find(gethash(b,a));
        }
        insert(gethash(a,b));
    }
    cout << ans << endl;
    return 0;
}