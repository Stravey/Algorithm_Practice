#include <iostream>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int i = 0,j = 0;
        string ans;
        ans.reserve(m + n);
        while(i < m || j < n) {
            if(i < m) {
                ans.push_back(word1[i]);
                i++;
            }
            if(j < n) {
                ans.push_back(word2[j]);
                j++;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}