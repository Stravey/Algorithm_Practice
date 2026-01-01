#include <iostream>
using namespace std;
// ×îÓÅ½â
class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
};
class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = 0;
        for(int i = low;i <= high;i++) {
            if(i % 2 == 1) {
                cnt++;
            }
        }   
        return cnt;
    }
};
int main()
{
    return 0;
}