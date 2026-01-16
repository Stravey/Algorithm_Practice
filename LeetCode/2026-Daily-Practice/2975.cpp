#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>  

using namespace std;
class Solution {
    unordered_set<int> f(vector<int>& a, int mx) {
        a.push_back(1);
        a.push_back(mx);
        sort(a.begin(), a.end());

        // 计算 a 中任意两个数的差，保存到哈希集合中
        unordered_set<int> st;
        for (int i = 0; i < a.size(); i++) {
            for (int j = i + 1; j < a.size(); j++) {
                st.insert(a[j] - a[i]);
            }
        }
        return st;
    }

public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        constexpr int MOD = 1'000'000'007;
        unordered_set<int> h_set = f(hFences, m);
        unordered_set<int> v_set = f(vFences, n);

        int ans = 0;
        // 使用 find 方法替代 contains 以确保兼容性
        for (int x : h_set) {
            if (v_set.find(x) != v_set.end()) {
                ans = max(ans, x);
            }
        }
        return ans ? (long long)ans * ans % MOD : -1;
    }
};