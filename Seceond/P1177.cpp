#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a[100005];
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
