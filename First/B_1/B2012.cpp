#include <iostream>
#include <iomanip>
using namespace std;

double a,b,ans = 0;

int main()
{
    cin >> a >> b;
    ans = (b / a) * 100;
    // 输出三位小数 百分数
    cout << fixed << setprecision(3) << ans << "%" << endl;
    return 0;
}