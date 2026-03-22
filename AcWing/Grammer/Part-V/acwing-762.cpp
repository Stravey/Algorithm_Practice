#include <bits/stdc++.h>

using namespace std;

int main()
{
    double k;
    string a, b;
    cin >> k >> a >> b;
    
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) {
            cnt++;
        }
    }
    
    if((double) cnt / a.size() >= k) {
        puts("yes");
    } else {
        puts("no");
    }
    
    return 0;
}