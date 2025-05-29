#include <iostream>
#include <iomanip>
using namespace std;

int s[25],n,m,maxsum;

// 处理评分信息
void handle(int a[],int m) {
    int maxscore = 0,minscore = 10,sum = 0;
    for(int i = 0;i < m;i++) {
        maxscore = max(a[i],maxscore);
        minscore = min(a[i],minscore);
        sum += a[i];
    }
    maxsum = max(maxsum,sum - maxscore - minscore);
}

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> s[j];
        }
        handle(s,m);
    }
    cout << fixed << setprecision(2) << maxsum * 1.0 / (m - 2) << endl;
    return 0;
}