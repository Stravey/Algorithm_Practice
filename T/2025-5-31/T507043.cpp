#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < n; ++i) cin >> B[i];
    
    unordered_map<int, int> b; // 元素值 -> 在B中的位置
    for (int i = 0; i < n; ++i) {
        b[B[i]] = i;
    }

    vector<bool> visited(n, false);
    int a = 0; // 用于存储所有循环节的公共GCD

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            vector<int> cycle;
            int cur = i;
            while (!visited[cur]) {
                visited[cur] = true;
                cycle.push_back(cur);
                cur = b[A[cur]];
            }
            if (cycle.size() == 1) continue;
            
            int c = 0;
            for (int j = 1; j < cycle.size(); ++j) {
                c = __gcd(c, cycle[j] - cycle[j-1]);
            }
            
            if (a== 0) {
                a = c;
            } else {
                a = __gcd(a, c);
            }
        }
    }
    if (a == 0) return 0; // 处理A=B
    vector<int> result;
    for (int k = 1; k * k <= a; ++k) {
        if (a % k == 0) {
            result.push_back(k);
            if (k != a / k) {
                result.push_back(a / k);
            }
        }
    }
    sort(result.begin(), result.end());
    for (int k : result) {
        cout << k << endl;
    }
    return 0;
}