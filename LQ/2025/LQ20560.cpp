#include <iostream>
using namespace std;
int main()
{
    // 一个数的立方个位数字为3 那么这个数的个位数字必须是7
    // 问题转化为1到2025中 个位数是7的数字个数
    int cnt = 0;
    int n = 2025;
    cnt = n / 10;
    cout << cnt << endl;
    return 0;
}