#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> v = {'a','e','i','o','u'};
        int ans = 0;
        for(int i = left;i <= right;i++) {
            const string& word = words[i];
            if(v.count(word[0]) && v.count(word.back())) {
                ans++;
            }
        }   
        return ans;
    }
};
int main()
{
    return 0;
}