#include <iostream>
#define max_n 210
using namespace std;

// n,na,nb分别表示共进行N次猜拳、小A出拳的周期长度，小B出拳的周期长度。
int n,na,nb,ans_a = 0,ans_b = 0;
int a[max_n],b[max_n];
// 0代表输 1代表赢 用mod方式
int ans[5][5] = {
    {0,0,1,1,0},
    {1,0,0,1,0},
    {0,1,0,0,1},
    {0,0,1,0,1},
    {1,1,0,0,0}
};
/* 
int ans[5][5] = {
    {0,-1,1,1,-1},
    {1,0,-1,1,-1},
    {-1,1,0,-1,1},
    {-1,-1,1,0,1},
    {1,1,-1,-1,0}
};
*/

int main()
{
    cin >> n >> na >> nb;
    for(int i = 0;i < na;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < nb;i++) {
        cin >> b[i];
    }
    for(int i = 0;i < n;i++) {
        ans_a += ans[a[i % na]][b[i % nb]];
        ans_b += ans[b[i % nb]][a[i % na]];
    }
    cout << ans_a << " " << ans_b << endl;
    return 0;
}