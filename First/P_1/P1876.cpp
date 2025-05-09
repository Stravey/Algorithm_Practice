#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long N;
long long cnt = 0;

/* vector<int> find(int n)
{
    vector<int> v;
    for(int i = 1;i <= n;i++)
    {
        cnt = sqrt(i);
        if(cnt * cnt == i)
        {
            v.push_back(i);
        } 
    }
    return v;
}

int main()
{
    cin >> N;
    vector<int> m = find(N);
    for(int light : m)
    {
        cout << light << " ";
    }
    cout << endl;
    return 0;
} */

int main()
{
    cin >> N;
    for(int i = 1;i * i <= N;i++)
    {
        cout << i * i << " ";
    }
    return 0;
}