#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int max_n = 1000000;
int vis[max_n], prime[max_n], cnt;
void init()
{
	memset(vis, 0, sizeof(vis));
	cnt = 0;
	for (int i = 2; i < max_n; i++)
	{
		if (!vis[i])
			prime[cnt++] = i;
		for (int j = 0; j < cnt && i * prime[j] < max_n; j++)
		{
			int t = i * prime[j]; 
			vis[t] = 1;
			if (i % prime[j] == 0)
				break;
		}
	}
}
int main()
{
	init();
	for (int i = 0; i < 10; ++i)
		printf("%d\n", prime[i]);
	return 0;
}