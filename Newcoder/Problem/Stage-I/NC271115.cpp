#include <iostream>
using namespace std;

// 思路：将输入的数取出个位 计算距离10的距离就是至少需要多少次
int main()
{
    int x;
    cin >> x;
    int g = x % 10;
    int ans;
    if(g == 0) {
        ans = 0;
    } else {
        ans = 10 - g;
    }
    cout << ans << endl;
    return 0;
}