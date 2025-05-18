#include <iostream>
#include <vector>
using namespace std;

int sum_d(int num) {
    int sum = 0;
    while(sum > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int smallestIndex(vector<int>& nums) {
    for(int i = 0;i < nums.size() - 1;i++) {
        if(sum_d(nums[i]) == i) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int ans = 0;
    vector<int> v(105);
    for(int i = 0; i < 3;i++) {
        cin >> v[i];
    }
    ans = smallestIndex(v);
    cout << ans << endl;
    return 0;
}