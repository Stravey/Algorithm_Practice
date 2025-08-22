// P3131 [USACO16JAN] Subsequences Summing to Sevens S
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,sum = 0,max_l = 0;
    int first[7];
    memset(first,-1,sizeof(first));
    first[0] = 0;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        sum += x;
        int m = (sum % 7 + 7) % 7;
        if(first[m] == -1) {
            first[m] = i;
        } else { 
            max_l = max(max_l,i - first[m]);
        }   
    }
    cout << max_l << endl;
    return 0;
}