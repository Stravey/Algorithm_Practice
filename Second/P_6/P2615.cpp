#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 40;
int a[MAX_N][MAX_N], n, x = 1, y = 0;

int main() {
	cin >> n;
	y = n / 2 + 1;
	for (int i = 1; i <= n * n; i++) {
		a[x][y] = i;
		if ((x == 1 && y == n) || a[x - 1][y + 1]) x++;
		else if (x == 1) {
			x = n;
			y++;
		} else if (y == n) {
			x--;
			y = 1;
		} else {
			x--;
			y++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
