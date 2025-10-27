#include <iostream>
using namespace std; 
int t[1005][1005];

int main()
{
	int n, m, x1, x2, y1, y2;
	cin >> n >> m;
	for (int k = 1; k <= m; ++k)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; ++i)
			for (int j = y1; j <= y2; ++j)
				++t[i][j];
	}//±©Á¦Ä£Äâ
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
			cout << t[i][j] << ' ';
		cout << endl;
	}
}
