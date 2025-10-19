#include <iostream>
#include <cstring>
using namespace std;
// 统计1 2 3个数 统计子串
int main()
{
    int n,ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0;i < n;i++) {
        int num_1 = 0,num_2 = 0,num_3 = 0;
        for(int j = i;j < n;j++) {
            if(s[j] == '1') num_1++;
            else if(s[j] == '2') num_2++;
            else if(s[j] == '3') num_3++;
            if(num_1 > 0 && num_1 == num_2 && num_2 == num_3) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}