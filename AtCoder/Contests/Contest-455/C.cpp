#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    // 数值 -> 总和
    map<int, long long> freq;

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x] += x;
        sum += x;
    }

    vector<long long> s;
    for(auto p : freq)
    {
        s.push_back(p.second);
    }
    // 降序排序
    sort(s.rbegin(), s.rend());

    long long ans = 0;
    for(int i = 0; i < min(k, (int)s.size()); i++)
    {
        ans += s[i];
    }

    cout << sum - ans << endl;

    return 0;
}