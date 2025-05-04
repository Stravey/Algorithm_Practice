#include <iostream>

using namespace std;

int N,M;
// a 正方形;b 长方形
int a = 0,b = 0;

// 正方形：S = N(N+1)(2N+1)/6 + (M-N)N(N+1)/2
// 长方形（包括正方形）：N(N+1)/2 + M(M+1)/2
int main()
{
    cin >> N >> M;
    for(int i = 1;i <= N;i++) 
    {
        for(int j = 1;j <= M;j++) 
        {
            a = i * (i + 1) * (2 * i + 1) / 6 + i * (j - i) * (i + 1) / 2;
            b = (i * (i + 1) / 2) * (j * (j + 1) / 2) - a; 
        }
    }
    cout << a << " " << b;
    return 0;
}