#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string s;

bool hasSubsequence(const string& s,const string& target) {
    int i = 0;
    for(char c : s) {
        if(i < target.size() && c == target[i]) {
            i++;
        }
    }
    return i == target.size();
}

int minSwapsToBreakLGR(const string& s) {
    int lastL = -1, lastG = -1, lastR = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') lastL = i;
        else if (s[i] == 'G' && i > lastL) lastG = i;
        else if (s[i] == 'R' && i > lastG) lastR = i;
    }
    
    if (lastL == -1 || lastG == -1 || lastR == -1) return 0;
    
    int lCount = 0, gCount = 0, rCount = 0;
    for (int i = 0; i <= lastR; i++) {
        if (s[i] == 'L' && i <= lastL) lCount++;
        else if (s[i] == 'G' && i <= lastG) gCount++;
        else if (s[i] == 'R') rCount++;
    }
    
    return min({lCount, gCount, rCount});
}

int minSwapsToBreakCSP(const string& s) {
    int lastC = -1, lastS = -1, lastP = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C') lastC = i;
        else if (s[i] == 'S' && i > lastC) lastS = i;
        else if (s[i] == 'P' && i > lastS) lastP = i;
    }
    
    if (lastC == -1 || lastS == -1 || lastP == -1) return 0;
    
    int cCount = 0, sCount = 0, pCount = 0;
    for (int i = 0; i <= lastP; i++) {
        if (s[i] == 'C' && i <= lastC) cCount++;
        else if (s[i] == 'S' && i <= lastS) sCount++;
        else if (s[i] == 'P') pCount++;
    }
    
    return min({cCount, sCount, pCount});
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> s;
        bool hasLGR = hasSubsequence(s,"LGR");
        bool hasCSP = hasSubsequence(s,"CSP");
        if(!hasLGR || !hasCSP) {
            cout << 0 << endl;
        } else {
            int swapsLGR = minSwapsToBreakLGR(s);
            int swapsCSP = minSwapsToBreakCSP(s);
            cout << min(swapsCSP,swapsLGR) << endl;
        }
    }
    return 0;
}