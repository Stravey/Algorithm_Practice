#include <iostream>
using namespace std;
const int N = 10005;

// tt表示栈顶
int stk[N], tt = 0;

// 普通栈
// 以下分别对应四个函数

// 向栈顶插入一个数
void push(int x) {
    stk[++tt] = x;
}

// 从栈顶弹出一个数
void pop() {
    if (tt > 0) {
        tt--;
    }
}

// 获取栈顶的值
int top() {
    if (tt > 0) {
        return stk[tt];
    }
    return -1; // 栈为空时的返回值
}

// 判断栈是否为空
bool empty() {
    return tt == 0;
}

// 获取栈中元素个数
int size() {
    return tt;
}

// 单调栈模板
// 常见模型：找出每个数左边离它最近的比它大/小的数
int tt = 0;
/* for (int i = 1; i <= n; i ++ )
{
    while (tt && check(stk[tt], i)) tt -- ;
    stk[ ++ tt] = i;
} */

int main()
{
    return 0;
}
