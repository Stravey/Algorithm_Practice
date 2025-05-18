#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int a,b;
const int MAXN = 1e8;  // 根据题目调整上限
vector<bool> is_prime(MAXN + 1, true);

// 预处理质数表
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

/* bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2;i * i <= num;i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
} */

bool isPalindrome(int num) {
    if(num < 0) {
        return false;
    }
    string s = to_string(num);
    for(int i = 0;i < s.length() / 2;i++) {
        if(s[i] != s[s.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    sieve();
    cin >> a >> b;
    for(int i = a;i <= b;i++) {
        if(is_prime[i] && isPalindrome(i)) {
            cout << i << endl;
        }
    }
    return 0;
}