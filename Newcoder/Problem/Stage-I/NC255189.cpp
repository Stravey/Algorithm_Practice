#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for(int pos = 0; pos <= n; pos++) {
        for(char dig = '0'; dig <= '9'; dig++) {
            string new_s = s.substr(0, pos) + dig + s.substr(pos);
            long long num = stoll(new_s);
            if(num % 7 == 0) {
                cout << new_s << endl;
                return 0;
            }
        }
    }
    return 0;
}