#include<bits/stdc++.h>

using namespace std;
int a,n,m,x;//a��ʾʼ��վ�ϳ�������n��ʾ��վ����m��ʾ�յ�վ�³�����������վ����x
int b,c[21] ={0}; 

int main()
{
	cin >> a >> n >> m >> x;
	c[0] = 0;
	c[1] = 1;
	for(int i = 2;i <= n;i++)
	{
		c[i] = c[i - 1] + c[i - 2];
	}
	
	b = (m - (c[n -3] + 1) * a) / (c[n - 2] - 1);
	int sum = (c[x - 1] - 1) * b + (c[x - 2] + 1) * a;
	cout << sum << endl;
	return 0;
}