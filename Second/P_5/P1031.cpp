#include<iostream>
#include<cmath>
using namespace std;
int n;//纸牌堆数
int a[10005];//储存纸牌数
int num=0;//纸牌的平均数
int ans=0;//移动次数
int flag=1;//表示纸牌不需要移动
int main()
{
	cin >> n;//输入纸牌堆数
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];//输入每堆的纸牌数
		num += a[i];//纸牌的总数进行累加
	}
	num /= n;//num变为总纸牌数的平均数
	for(int i = 1;i <= n;i++) a[i] -= num;//将每堆纸牌数变为距离满足条件的纸牌数的数
	for(int i = 1;i <= n;i++) if(a[i] != 0) flag = 0;//flag==0，表明需要移动
	if(flag == 0)//需要移动，那么就开始吧！
	{
		for(int i = 1;i <= n;i++)//从头遍历到尾
		{
			if(a[i] > 0)//如果它的纸牌数多了
			{
				a[i+1] += a[i];//就把它移动到下一堆去
				a[i] = 0;//这一堆满足条件
				ans++;//移动次数++
			}
			if(a[i] < 0)//如果它的纸牌数少了
			{
				a[i+1] -= abs(a[i]);//那么它下一堆的纸牌就移动到它上来
				a[i] = 0;//这一堆满足条件
				ans++;//移动次数++
			}
			if(a[i] == 0) continue;//如果它满足条件，就不鸟它了。
		}
		cout << ans << endl;//输出答案
	}
	if(flag == 1) {
        cout<< ans << endl;//如果本来就满足条件，直接输出答案（0）
    }
	return 0;
}