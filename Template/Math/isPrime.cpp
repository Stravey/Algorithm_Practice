#include <iostream>
using namespace std;

// 试除法判定质数 模板
bool is_prime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0)
            return false;
    return true;
}


int main()
{
    return 0;
}