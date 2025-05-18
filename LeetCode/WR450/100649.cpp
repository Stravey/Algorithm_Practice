#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// 计算每个数字的数位和（即数字中每一位数的和）
static int sum_d(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 比较函数 计算数位和之后进行比较
static bool compare(int a,int b) {
    int sumA = sum_d(a);
    int sumB = sum_d(b);
    if (sumA == sumB) {
        return a < b;
    }
    return sumA < sumB;
}

// 最小交换次数
int minSwaps(vector<int>& nums) {
    // 原本的数组
    vector<int> o = nums;
    // 排序后的数组
    vector<int> v = nums;
    // 对数组进行排序
    sort(v.begin(), v.end(), compare);
    // 哈希表value记录原数组中每个值出现的所有索引位置
    unordered_map<int,vector<int>> value;
    for (int i = 0; i < o.size(); ++i) {
        value[o[i]].push_back(i);
    }
    vector<bool> visited(o.size(), false);
    int swaps = 0;
    for (int i = 0; i < o.size(); ++i) {
        if (visited[i] ||o[i] == v[i]) {
            continue;
        }
        int j = i;
        int size = 0;
        while(!visited[j]) {
            visited[j] = true;
            int target = v[j];
            int pos = value[target].back();
            value[target].pop_back();
            j = pos;
            size++;
        }
        if(size > 0) {
            swaps += (size - 1);
        }
    }
    return swaps;
}

int main()
{
    
    return 0;
}