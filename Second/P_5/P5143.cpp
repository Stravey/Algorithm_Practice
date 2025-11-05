#include <bits/stdc++.h>
using namespace std;

struct node {
	int x, y, z;
}a[50005];
double sum;

bool cmp(node x, node y) {
	return x.z < y.z;
}

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y >> a[i].z;
	}
	sort(a + 1, a + 1 + n, cmp);
	for(int i = 2; i <= n; i++) {
		sum += sqrt((a[i - 1].x - a[i].x) * (a[i - 1].x - a[i].x) + (a[i - 1].y - a[i].y) * (a[i - 1].y - a[i].y) + (a[i - 1].z - a[i].z) * (a[i - 1].z - a[i].z));
	}
	cout << fixed << setprecision(3);
	cout << sum;
}
