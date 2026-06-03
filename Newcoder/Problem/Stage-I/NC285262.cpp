#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if(k <= n - 1) {
        puts("YES\n"); 
    } else {
        puts("NO\n");
    }
    return 0;
}