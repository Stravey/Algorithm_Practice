#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 1;i < n - 1;i++) {
            if(arr[i] * 2 != arr[i + 1] + arr[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    return 0;
}