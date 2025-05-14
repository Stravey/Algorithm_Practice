#include <iostream>
#include <vector>

using namespace std;

// 高精度乘法
vector<int> mul(vector<int> a, int b) {
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size() || t; i++) 
    {
        if (i < a.size()) t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (c.size() > 1 && c.back() == 0) 
    {
        c.pop_back();
    }
    return c;
}

// 高精度加法
vector<int> add(vector<int> a, vector<int> b) {
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size() || t; i++) 
    {
        if (i < a.size()) t += a[i];
        if (i < b.size()) t += b[i];
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> sum(1, 0);
    vector<int> fac(1, 1);
    for (int i = 1; i <= n; i++) 
    {
        fac = mul(fac, i);
        sum = add(sum, fac);
    }
    for (int i = sum.size() - 1; i >= 0; i--)
    {
        cout << sum[i];
    }
    cout << endl;
    return 0;
}

