// 求 C a b 的值
// a b : 1 ~ 5000 高精度乘法
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int N=5010;

int primes[N],cnt;
int sum[N];
bool st[N];

void get_primes(int n)
{
    for(int i = 2;i <= n; i++)
    {
        if(!st[i]) primes[cnt++]=i;
        for(int j = 0; primes[j] * i <= n;j++)
        {
            st[primes[j] * i] = true;
            if(i % primes[j] == 0) break;
        } 
    }
}
// 对p的各个<=a的次数算整除下取整倍数
int get(int n, int p)
{
    int res = 0;
    while(n)
    {
        res += n / p;
        n /= p;
    }
    return res;
}
//高精度乘
vector<int> mul(vector<int> a, int b)
{
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size(); i ++ )
    {
        t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (t)
    {
        c.push_back(t % 10);
        t /= 10;
    }
    // while(C.size()>1 && C.back()==0) C.pop_back();//考虑b==0时才有pop多余的0 b!=0不需要这行
    return c;
}

int main()
{
    int a,b;
    cin >> a >> b;
    get_primes(a);

    for(int i=0;i<cnt;i++)
    {
        int p = primes[i];
        sum[i] = get(a, p) - get(a - b, p)-get(b, p);
    }

    vector<int> res;
    res.push_back(1);

    for (int i = 0; i < cnt; i ++ )
        for (int j = 0; j < sum[i]; j ++ )//primes[i]的次数
            res = mul(res, primes[i]);

    for (int i = res.size() - 1; i >= 0; i -- ) printf("%d", res[i]);
    puts("");

    return 0;
}
