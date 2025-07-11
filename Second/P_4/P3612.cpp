#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    long long len1,len2,n,k;
    cin >> s >> n;
    len1 = s.length();
    len2 = len1;
    // Õÿ’π
    while(len2 < n) {
        len2 *= 2;
    }
    // —πÀı
    while(n > len1) {
        k = len2 / 2 + 1;
        if(n >= k){
            if(n == k) {
                n--;
            } else {
                n -= k;
            }
        }
        len2 /= 2;
    }
    cout << s[n - 1];
    return 0;
}