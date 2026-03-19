#include <iostream>
#include <vector>
using namespace std;

vector<int> S, a;

// 一维前缀和 模板公式
// S[i] = a[1] + a[2] + ... a[i]
// a[l] + ... + a[r] = S[r] - S[l - 1]

// 二维前缀和 模板公式
// S[i, j] = 第 i 行 j 列格子左上部分所有元素的和
// 以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵的和为：
// S[x2, y2] - S[x1 - 1, y2] - S[x2, y1 - 1] + S[x1 - 1, y1 - 1]

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}