#include <iostream>
#include <vector>
using namespace std;

vector<int> S;

// 一维差分模板公式
// 给区间[l, r]中的每个数加上c：B[l] += c, B[r + 1] -= c

// 二维差分模板公式
// 给以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵中的所有元素加上c：
// S[x1, y1] += c,
// S[x2 + 1, y1] -= c
// S[x1, y2 + 1] -= c
// S[x2 + 1, y2 + 1] += c

// 位运算
// 求 n 的第 k 位数字: n >> k & 1
// 返回 n 的最后一位 1 ：lowbit(n) = n & -n

int main()
{
    return 0;
}
