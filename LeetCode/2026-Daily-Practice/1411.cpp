#include <iostream>
using namespace std;
class Solution {
public:
    int numOfWays(int n) {
       int a = 6;
       int b = 6;
       const int p = 1000000007;
       for(int i = 1;i < n;i++) {
            a = (a + b) % p * 2 % p;
            b = (a + b) % p;
       } 
       return (a + b) % p;
    }
};
int main()
{
    return 0;
}