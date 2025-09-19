#include <bits/stdc++.h>
using namespace std;
// T668544 [语言月赛 202509] 你这题至少 *3000
int n,m,a[1000005];
int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    vector<bool> v(m + 2,false);
    for(int i = 0;i < n;i++) {
        v[a[i]] = true;
        if(a[i] < m) {
            v[a[i] + 1] = true;
        }
    }
    vector<int> va;
    for(int i = 1;i <= m;i++) {
        if(!v[i]) {
            va.push_back(i);
        }
    }
    if(va.empty()) {
        cout << "Accepted" << endl;
    } else {
        cout << va.size() << endl;
        for(int i = 0;i < va.size();i++) {
            if(i > 0) cout << " ";
            cout << va[i];
        }
        cout << endl;
    }
    return 0;
}