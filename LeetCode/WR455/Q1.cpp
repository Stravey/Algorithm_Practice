#include <iostream>
#include <unordered_map>
using namespace std;

// 普通计数问题

/* class Solution {
public:
    bool check(int x) {
        if(x <= 1) {
            return false;
        }
        if(x == 2) {
            return true;
        }
        if (x % 2 == 0) {
            return false;
        }
        for(int i = 3;i * i <= x;i+=2) {
            if(x % i == 0) {
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums) {
            freq[num]++;
        }
        for(auto& [num,count] : freq) {
            if(check(count)) {
                return true;
            }
        }
        return false;
    }
}; */