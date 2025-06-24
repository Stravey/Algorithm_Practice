#include <iostream>
using namespace std;

int a,b,p,ans = 0,f[100005],marked[100005],vis[100005];

bool check(int x) {
    if(x == 2) {
        return true;
    }
    if(x % 2 == 0) {
        return false;
    }
    for(int i = 3;i * i <= x;i++) {
        if(x % i == 0) {
            return false;
        }
    } 
    return true;
}

int find(int x) {
    if(x != f[x]) {
        f[x] = find(f[x]);
    }
    return f[x];
}

int main()
{
    cin >> a >> b >> p;
    for(int i = 1;i <= b;i++) {
        f[i] = i;
    }
    for(int i = p;i <= b;i++) {
        if(marked[i] == 1) continue;
        if(check(i)) {
            marked[i] = 1;
            for(int j = 2;j * i <= b;j++) {
                marked[j * i] = 1;
                if(j * i < a) continue;
                int t1 = find(i),t2 = find(j * i);
                if(t1 != t2) {
                    f[t1] = t2;
                }
            }
        }
    }
    for(int i = a;i <= b;i++) {
        if(!vis[find(i)]) {
            ans++;
            vis[find(i)] = 1;
        }
    }
    cout << ans << endl;
    return 0;
}