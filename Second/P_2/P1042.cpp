#include <iostream>
#include <cmath>
using namespace std;

int f[2] = {11,21}; // 两种赛制的得分
int a[25 * 2600 + 10],n = 0;

int main()
{   
    char tmp;
    while(1) {
        cin >> tmp;  // 读入结果
        if(tmp == 'E') {
            break;
        } else if(tmp == 'W') {
            a[n++] = 1;   // 华华赢
        } else if(tmp == 'L') {
            a[n++] = 0;   // 华华输
        }
    }
    for(int k = 0;k < 2;k++) {   // 两种赛制循环
        int w = 0,l = 0;
        for(int i = 0;i < n;i++) {
            w += a[i],l += 1 - a[i];
            if((w >= f[k] || l >= f[k]) && abs(w - 1) >= 2) {    /* 获胜者大于获胜分数且比对手高2分以上 */
                cout << w << ":" << l << endl;
                w = l = 0;
            }
        }
        cout << w << ":" << l << endl;
        cout << endl;
    }
    return 0;
}