#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// 基数排序模板 以十进制为例
const int MAXN = 50005;
const int MAXT = 7;
const int BASE = 10;
void RadixSort(vector<int>& a) {
    // 数组长度
    int n = a.size();
    // 记录基数次方数组
    int PowOfBase[MAXT];
    PowOfBase[0] = 1;
    for(int i = 1;i < MAXT;i++) {
        PowOfBase[i] = PowOfBase[i - 1] * BASE;
    }
    // 基数排序桶初始化 本质是个二维数组 每一个基数位置上由一列数组组成
    int RadixBucket[BASE][MAXN];
    // 基数排序每一个位置开始的数组
    int RadixBucketTop[BASE];
    for(int i = 0;i < n;i++) {
        a[i] += PowOfBase[MAXT - 1];
    }
    // 从个位开始
    int pos = 0;
    while(pos < MAXT) {
        memset(RadixBucketTop, 0, sizeof(RadixBucketTop));
        for(int i = 0;i < n;i++) {
            int rdx = a[i] / PowOfBase[pos] % BASE;
            RadixBucket[rdx][RadixBucketTop[rdx]++] = a[i];
        }
        // 每一位基数位开头的数组的第一个位置
        int top = 0;
        for(int i = 0;i < BASE;i++) {
            for(int j = 0;j < RadixBucketTop[i];j++) {
                a[top++] = RadixBucket[i][j];
            }
        }
        pos++;
    }
    for(int i = 0;i < n;i++) {
        a[i] -= PowOfBase[MAXT - 1];
    }
}
void test() {

}
int main() {
    return 0;
}
