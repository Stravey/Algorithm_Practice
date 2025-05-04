#include <iostream>
using namespace std;

int m,ans = 0;
int cnt = 0;
int maxM = 0;

int maxProduct(int n) 
{
    string m = to_string(n);
    int len = m.length();
    for(int i = 0;i < len;i++) 
    {
        for(int j = i + 1;j < len;j++) 
        {
            cnt = (m[i] - '0') * (m[j] - '0');
            if(cnt > maxM) 
            {
                maxM = cnt;
            }
        }
    }
    return maxM;
}

int main()
{
    cin >> m;
    ans = maxProduct(m);
    cout << ans << endl;
    return 0;
}