#include <iostream>
#include <algorithm>
using namespace std;

int n,a[20001],nums[101];

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        nums[a[i]]++;
        if(nums[a[i]] < 2) {
            cout << a[i] << " ";
        }
    }
    return 0;
}