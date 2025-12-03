#include <iostream>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(char& c : s) {
            if(c >= 65 && c <= 90) {
                c |= 32;
            }
        }
        return s;
    }
};
int main()
{
    return 0;
}