#include <iostream>
#include <vector>
using namespace std;

// 判断数组问题
const int N = 1e5 + 10;

int a[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool mark = true;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) {
            mark = false;
            break;
        }
    }
    if(!mark) {
        cout << "No\n";
        return 0;
    }
    vector<long long> b; 
    for(int i = 0; i < n; i++) {
        int x = a[i + 1] - a[i];
        b.push_back(x);
    }
    bool flag = true;
    for(int i = 0; i < b.size() - 1; i++) {
        if(b[i] <= b[i + 1]) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}