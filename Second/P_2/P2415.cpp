#include <iostream>
#include <cmath>
using namespace std;

int a;           //元素的集合中的数
int count = 0;   //计数
int sum = 0;     //总数
long long ans;   //答案

int main()
{
    while(cin >> a) {
        count++;
        sum += a;
    }
    ans = sum * pow(2,count - 1);
    cout << ans << endl;
    return 0;
}