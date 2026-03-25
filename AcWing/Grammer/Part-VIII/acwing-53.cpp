#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> a;
        sort(input.begin(), input.end());
        for(int i = 0; i < k; i++) {
            a.push_back(input[i]);
        }
        return a;
    }
};

int main()
{

    return 0;
}