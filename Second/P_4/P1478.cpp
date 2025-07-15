#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n,s,a,b,y[5005],mark = 0,ans = 0,tx,ty;
    cin >> n >> s >> a >> b;
    for(int i = 0;i < n;i++) {
        cin >> tx >> ty;
        if(tx <= a + b) {
            y[mark] = ty;
            mark++;
        }
    }
    sort(y,y + mark);
    for(int i = 0;i < mark;i++) {
        if(s >= y[i]) {
            ans++;
            s -= y[i];
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
