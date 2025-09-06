#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 所有奇数长度子序列的和
// 前缀和
int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size();
    vector<int> a(n + 1,0);
    for(int i = 0;i < arr.size();i++) {
        a[i + 1] = a[i] + arr[i];
    }
    int sum = 0;
    for(int len = 1;len <= n;len += 2) {
        for(int i = 0;i + len <= n;i++) {
            sum += a[i + len] - a[i];
        }
    }
    return sum;
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

