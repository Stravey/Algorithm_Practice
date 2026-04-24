// 欧拉函数
// 求 1 ~ n中与 n 互质的数的个数
// 公式 f(n) = n * (1 - 1 / p1) *** (1 - 1 / pk)
// p1 p2 ... pk为 n 的质因数 

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;

        int res = a;
        for(int i = 2; i <= a / i; i++)
        {
            if(a % i == 0) 
            {
                res = res / i * (i - 1);
                while(a % i == 0) a /= i;
            }
        }

        if(a > 1) res = res / a * (a - 1);

        cout << res << endl;
    }

    return 0;
}