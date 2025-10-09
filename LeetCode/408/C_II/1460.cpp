#include <bits/stdc++.h>
using namespace std;
// 法一:开辟两个数组 统计元素出现的次数 如果不相等 则返回false
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1005],b[1005];
        memset(a,sizeof(a),0);
        memset(b,sizeof(b),0);
        int n = target.size();
        for(int i = 0;i < n;i++) {
            a[target[i]]++;
            b[arr[i]]++;
        }
        for(int i = 0;i <= 1000;i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};
// 法二:开辟一个数组 target出现++ arr出现-- 遍历元素是否为0 
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1005];
        memset(a,sizeof(a),0);
        int n = target.size();
        for(int i = 0;i < n;i++) {
            a[target[i]]++;
            a[arr[i]]--;
        }
        for(int i = 0;i <= 1000;i++) {
            if(a[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    cout << 1 << endl;
}