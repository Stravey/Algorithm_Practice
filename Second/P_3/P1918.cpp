#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int,int> m;
int n,t,q;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> t;
        m[t] = i;
    }
    cin >> q;
    for(int i = 1;i <= q;i++) {
        cin >> t;
        if(m.find(t) == m.end()) {
            cout << 0 << endl;
        } else {
            cout << m[t] << endl;
        }
    }
    return 0;
}