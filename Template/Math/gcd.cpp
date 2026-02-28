#include <iostream>
using namespace std;

// 欧几里得算法求最大公约数 模板
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    return 0;
}