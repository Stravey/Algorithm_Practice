#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(int i = 0;i < apple.size();i++) {
            sum += apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int need = 0;
        while(sum > 0) {
            sum -= capacity[need];
            need += 1;
        }
        return need;
    }
};
int main()
{
    return 0;
}