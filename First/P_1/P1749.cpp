#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int T;
long long N, k;

int main()
{
    cin >> T;
    if (T <= 0) {
        return 1;
    }
    while (T--)
    {
        cin >> N >> k;
        if (N < 0 || k < 0) {
            continue;
        }
        long long cnt = (k * (k + 1)) / 2;
        if (N >= cnt)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}