#include <bits/stdc++.h>
using namespace std;
// T668546 [语言月赛 202509] 逃避讲题的最好方法是:
int a[305][305];
int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n,m,x,c;
        cin >> n >> m >> x;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= m;j++) {
                cin >> a[i][j];
            }
        }
        cin >> c;
        int need = 0;
        for(int j = 1;j <= m;j++) {
            int max_score = a[1][j];
            int min_score = a[1][j];
            for(int i = 2;i <= n;i++) {
                max_score = max(max_score,a[i][j]);
                min_score = min(min_score,a[i][j]);
            }
            int s_score = a[x][j];
            if(s_score == max_score || s_score == min_score) {
                need++;
            }
        }
        if(need <= c) {
            cout << "down" << endl;
        } else {
            cout << "up" << endl;
        }
    }
    return 0;
}