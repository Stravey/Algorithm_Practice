#include <iostream>
using namespace std;
const int N = 10005;

// 普通队列 模板
// hh 表示队头，tt表示队尾
int q[N], hh = 0, tt = -1;

// 向队尾插入一个数
void push(int x) {
    q[++tt] = x;
}

// 从队头弹出一个数
void pop() {
    if (hh <= tt) {
        hh++;
    }
}

// 获取队头的值
int front() {
    if (hh <= tt) {
        return q[hh];
    }
    return -1; // 队列为空时的返回值
}

// 获取队尾的值
int back() {
    if (hh <= tt) {
        return q[tt];
    }
    return -1; // 队列为空时的返回值
}

// 判断队列是否为空
bool empty() {
    return hh > tt;
}

// 获取队列中元素个数
int size() {
    return tt - hh + 1;
}

// 单调队列 模板
// 常见模型：找出滑动窗口中的最大值/最小值
int hh = 0, tt = -1;
/* for (int i = 0; i < n; i ++ )
{
    while (hh <= tt && check_out(q[hh])) hh ++ ;  // 判断队头是否滑出窗口
    while (hh <= tt && check(q[tt], i)) tt -- ;
    q[ ++ tt] = i;
} */


int main()
{
    return 0;
}
