// 线性筛

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1000010;

int primes[N], cnt;
bool st[N];

void get_primes(int x)
{
    for(int i = 2; i <= x; i++)
    {
        if(!st[i]) primes[cnt++] = i;
        for(int j = 0; primes[j] <= x / i; j++)
        {
            st[primes[j] * i] = true;
            if(i % primes[j] == 0) break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    get_primes(n);
    cout << cnt << endl;
    return 0;
}
