#include <iostream>
using namespace std;

int n,y[25],s[25],cnt = 0;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> y[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> s[i];
    }
    for(int i = 0;i < n - 1;i++) {

        int y1 = y[i],y2 = y[i + 1];

        int s1 = s[i],s2 = s[i + 1];

        if((y1 == s1) || (y2 == s2)) {
            cnt++;
            continue;
        }
        
        if((y1 < s1 && y2 > s2) || (y1 > s1 && y2 < s2)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}