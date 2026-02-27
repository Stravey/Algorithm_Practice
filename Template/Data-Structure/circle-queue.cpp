#include <iostream>
using namespace std;
const int N = 10005;

// 循环队列 模板
// hh 表示队头，tt表示队尾的后一个位置
int q[N], hh = 0, tt = 0;

// 向队尾插入一个数
void push(int x) {
    q[tt++] = x;
    if (tt == N) tt = 0;
}

// 从队头弹出一个数
void pop() {
    if (hh != tt) {
        hh++;
        if (hh == N) hh = 0;
    }
}

// 获取队头的值
int front() {
    if (hh != tt) {
        return q[hh];
    }
    return -1; // 队列为空时的返回值
}

// 获取队尾的值（注意：队尾是tt的前一个位置）
int back() {
    if (hh != tt) {
        // 处理循环，获取tt的前一个位置
        int last = tt - 1;
        if (last < 0) last = N - 1;
        return q[last];
    }
    return -1; // 队列为空时的返回值
}

// 判断队列是否为空
bool empty() {
    return hh == tt;
}

// 获取队列中元素个数
int size() {
    if (tt >= hh) {
        return tt - hh;
    } else {
        return tt + N - hh;
    }
}

int main()
{
    return 0;
}
