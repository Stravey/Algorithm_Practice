#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> n;
    printf("%d\n", n);
    for(int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n" , n / a[i], a[i]);
        // 一直往下取
        n %= a[i];
    }
    return 0;
}