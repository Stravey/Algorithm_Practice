#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

// f(f(x)) = f(x) 只有当 f(x) <= 9 时才成立
// 计算数位和
ll digitSum(const string& s) {
    ll sum = 0;
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}

void solve() {
    string x;
    cin >> x;
    
    ll s = digitSum(x);
    if (s <= 9) {
        cout << 0 << endl;
        return;
    }
    
    ll need = s - 9;
    vector<int> digits;
    int first = x[0] - '0';
    digits.push_back(first - 1);

    for (size_t i = 1; i < x.size(); i++) {
        int digit = x[i] - '0';
        digits.push_back(digit);
    }
    
    sort(digits.rbegin(), digits.rend()); 

    int moves = 0;
    int reduce = 0;
    for (ll val : digits) {
        if(reduce >= need) {
            break;
        } 
        reduce += min(val, need - reduce);
        moves++;
    }
    
    cout << moves << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}