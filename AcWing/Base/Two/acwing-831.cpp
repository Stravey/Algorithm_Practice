// KMP算法模板
#include <iostream>
using namespace std;

const int N = 100010;
const int M = 1000010;

int n, m;
char p[N], s[M];
int ne[N];

int main()
{
    cin >> n >> (p + 1);
    cin >> m >> (s + 1);
    
    // next数组
    for(int i = 2, j = 0; i <= n; i++) {
        while(j && p[i] != p[j + 1]) j = ne[j];
        if(p[i] == p[j + 1]) j++;
        ne[i] = j;
    }
    
    // kmp匹配成功
    for(int i = 1, j = 0; i <= m; i++) {
        while(j && s[i] != p[j + 1]) j = ne[j];
        if(s[i] == p[j + 1]) j++;
        if(j == n) {
            // 匹配成功
            printf("%d ", i - n);
            j = ne[j];
        }
    }
    
    return 0;
}