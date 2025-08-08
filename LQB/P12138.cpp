// P12138 [À¶ÇÅ±­ 2025 Ê¡ A] Ñ°ÕÒÖÊÊı
#include <iostream>
using namespace std;

bool check(int x) {
    if(x < 2) return false;
    for(int i = 2;i * i <= x;i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int ans = 0;
    for(int i = 2;;i++) {
        if(check(i)) {
            ans++;
        }
        if(ans == 2025) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}