#include <iostream>
using namespace std;

int n,s[15],b[15],ans = 1000000000;

void func(int sd,int kd,int step) {
    if(step == n) {
        int tmp = abs(sd - kd);
        if(tmp < ans && sd != 1) {
            ans = tmp;
        }
        return;
    }
    step++;
    func(sd * s[step],kd + b[step],step);
    func(sd,kd,step);
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> s[i] >> b[i];
    }
    func(1,0,0);
    cout << ans << endl;
    return 0;
}