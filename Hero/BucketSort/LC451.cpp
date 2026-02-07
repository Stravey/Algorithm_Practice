#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
# define ArrayType char
// 根据字符出现频率排序
class Solution {
    vector<vector<ArrayType>> bucket;
    vector<int> count;
    void bucketSort(ArrayType* a, int n, int maxx) {
        bucket.clear();
        count.resize(maxx);
        for(int i = 0;i < maxx;i++) {
            count[i] = 0;
        }
        for(int i = 0;i < n;i++) {
            count[a[i]]++;
        }
        for(int i = 0;i <= n;i++) {
            bucket.push_back({});
        }
        for(int i = 0;i < maxx;i++) {
            int cnt = count[i];
            bucket[cnt].push_back(i);
        }
        for(int i = 0;i <= n;i++) {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }
public:
    string frequencySort(string s) {
        int n = s.size();
        string ret = "";
        bucketSort((char *)s.c_str(), n, 256);
        for(int i = n;i > 0;i--) {
            for(int j = 0;j < bucket[i].size();j++) {
                for(int k = 0;k < i;k++) {
                    ret += bucket[i][j];
                }
            }
        }
        return ret;
    }
};