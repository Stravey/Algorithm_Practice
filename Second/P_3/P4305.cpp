#include <iostream>
#include <map>
using namespace std;

void check() {
    int n,tmp;
    map<int,int> m;
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&tmp);
        if(m.find(tmp) == m.end()) {
            m[tmp] = 1;
            cout << tmp << " ";
        }
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--) {
        check();
        cout << endl;
    }
    return 0;
}