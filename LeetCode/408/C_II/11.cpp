#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int res = 0;
        while(left < right){
            int tmp = (right - left) * min(height[left],height[right]);
            res = max(res,tmp);
            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }
        return res;
    }
};
int main()
{
    return 0;
}