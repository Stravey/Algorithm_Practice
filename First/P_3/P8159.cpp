#include <iostream>
#include <cstring>
using namespace std;

string s;
long long ans = 0;

int main()
{
    cin >> s;
    for (int i = 0; i < s.size() - 6; i++)
    {
        if (s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'u' && s[i + 3] == 'a' && s[i + 4] == 'n' && s[i + 5] == 'z' && s[i + 6] == 'h' && s[i + 7] == 'i')
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}