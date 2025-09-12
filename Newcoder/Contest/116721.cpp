#include <bits/stdc++.h>
using namespace std;

// https://ac.nowcoder.com/acm/contest/116721/B

long long sum(int x) {
    long long ans = 0;
    while(x != 0) {
        long long digit = x % 10;
        ans += digit;
        x /= 10;
    }
    return ans;
}

bool is_good(int x) {
    return sum(x) % 13 == 0;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int l,r;
        cin >> l >> r;
        
        int first = -1;
        for(int i = l;i <= r;i++) {
            if(is_good(i)) {
                first = i;
                break;
            }    
        }
        
        if(first == -1) {
            cout << "-1" << endl;
            continue;
        }
        
        int second = -1;
        for(int i = first + 1;i <= r;i++) {
            if(is_good(i)) {
                second = i;
                break;
            }
        }
        
        cout << second << endl;
        
    }
    return 0;
}