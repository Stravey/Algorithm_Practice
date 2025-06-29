#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstring>
using namespace std;

vector<string> partitionString(string s) {
    vector<string> segments;
    unordered_set<string> seen;
    int n = s.size();
    int start = 0;
    while(start < n) {
        string cur = "";
        int end = start;
        bool found = false;
        while(end < n) {
            cur += s[end];
            if(seen.find(cur) == seen.end()) {
                seen.insert(cur);
                segments.push_back(cur);
                start = end + 1;
                found = true;
                break;
            }
            end++;
        }
         if (!found) {
            if (cur.empty()) {
                break;
            }
            if (seen.find(cur) != seen.end()) {
                if (!segments.empty()) {
                    string last_seg = segments.back();
                    segments.pop_back();
                    last_seg += cur;
                    segments.push_back(last_seg);
                } else {
                    segments.push_back(cur);
                }
            } else {
                segments.push_back(cur);
            }
            break;
        }
    }
    return segments;
}

int main()
{

    return 0;
}