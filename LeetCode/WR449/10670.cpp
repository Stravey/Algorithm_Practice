#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

string s;
int ans = 0,cnt = 0,k;
vector<int> freq(26,0);

int minDeletion(string s, int k) 
{
    for(char c : s){
        freq[c - 'a']++;
    }

    sort(freq.begin(),freq.end(),greater<int>());

    for(int i = 0;i < 26;i++) {
        if(freq[i] > 0) {
            cnt++;
        }
    }

    if(cnt <= k) {
        return 0;
    }

    int a = cnt - k;
    for(int i = 25;i >= 0 && a > 0;i--) {
        if(freq[i] > 0) {
            ans += freq[i];
            a--;
        }
    }

    return ans;
}

int main()
{
    cin >> s >> k;
    ans = minDeletion(s,k);
    cout << ans;
    return 0;
}