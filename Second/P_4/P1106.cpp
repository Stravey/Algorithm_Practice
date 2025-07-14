#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string s;
int n,k,mark = 0,flag = 0,tmp;

int find_min(int l,int r) {
    char min_c = s[l];
    mark = l + 1;
    for(int i = mark;i <= r;i++) {
        if(s[i] < min_c) {
            min_c = s[i];
            mark = i + 1;
        }
    } 
    return min_c - '0';
}

int main()
{
    cin >> s >> k;
    n = s.length();
    for(int i =0 ;i < n - k;i++) {
        tmp = find_min(mark,k + i);
        if(tmp == 0 && flag == 0) {
            continue;
        }
        flag = 1;
        cout << tmp;
    }
    if(flag == 0) {
        cout << '0';
    }
    return 0;
}