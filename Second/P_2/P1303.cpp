#include <iostream>
#include <cstring>
#define max_n 5010
using namespace std;
int a[max_n],b[max_n],c[max_n];

int main()
{
    string A,B;
    cin >> A >> B;
    int len_a = A.length();
    int len_b = B.length();
    for(int i = len_a - 1;i >= 0;i--) {
        a[len_a - i] = A[i] - '0';
    }
    for(int i = len_b - 1;i >= 0;i--) {
        b[len_b - i] = B[i] - '0';
    }
    for(int i = 1;i <= len_a;i++) {
        for(int j = 1;j <= len_b;j++) {
            c[i + j - 1] += a[i] * b[j];
        }
    }
    int len = len_a + len_b;
    for(int i = 1;i <= len;i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    for( ;!c[len]; ) {
        len--;
    }
    for(int i = max(1,len);i >= 1;i--) {
        cout << c[i];
    }
    return 0;
}