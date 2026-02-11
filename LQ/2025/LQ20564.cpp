#include <iostream>
using namespace std;
int main()
{
    // 初始血量2025
    int x = 2025;
    // 回合数
    int hh = 0;
    while(x >= 0) {
        hh++;
        // 第一个英雄
        x = x - 5;
        // 第二个英雄
        if(hh % 2 == 1) {
            x = x - 15;
        } else {
            x = x - 2;
        }
        // 第三个英雄
        if(hh % 3 == 1) {
            x = x - 2;
        } else if(hh % 3 == 2) {
            x = x - 10;
        } else if(hh % 3 == 0) {
            x = x - 7;
        }
    }
    cout << hh << endl;
    return 0;
}