#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
bool is_in(vector<int>& a, int x) {
    auto it = find(a.begin(), a.end(), x);
    return it != a.end();
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n1, n2, m;
    cin >> n1 >> n2;
    vector<int> q1, q2;
    cin >> m;
    for(int i = 0;i < m;i++) {
        ll x;
        cin >> x;
        // 1
        if(!is_in(q1, x) && !is_in(q2, x)) {
            q2.insert(q2.begin(), x);
        // 2.1
        } else if(is_in(q1, x)) {
            q1.erase(find(q1.begin(), q1.end(), x));
            q1.insert(q1.begin(), x);
        // 2.2
        } else if(is_in(q2, x)) {
            q2.erase(find(q2.begin(), q2.end(), x));
            q1.insert(q1.begin(), x);
        }
        // 3
        if((int)q1.size() > n1 && (int)q2.size() < n2) {
            q2.insert(q2.begin(), q1.back());
            q1.pop_back();
        } else if((int)q1.size() > n1) {
            q1.pop_back();
        }
        // 4
        if((int)q2.size() > n2) {
            q2.pop_back();
        }
    }
    for(int i = 0;i < q1.size();i++) {
        cout << q1[i] << " ";
    }
    cout << endl;
    for(int i = 0;i < q2.size();i++) {
        cout << q2[i] << " ";
    }
    return 0;
}