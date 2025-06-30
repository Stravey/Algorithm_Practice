#include <iostream>
#include <cstring>
using namespace std;

char int_to_char(int a) {
    return a <= 9 ? '0' + a :a - 10 + 'A';
}

int char_to_int(char a) {
    return '0' <= a && a <= '9' ? a - '0' : 10 + a - 'A';
}

int main() 
{   
    int output[33];
    int n,m,dec = 0,num = 0;
    string input;
    cin >> n >> input >> m;
    // 原数转化为十进制
    for(int i = 0;i < input.length();i++) {
        dec = dec * n + char_to_int(input[i]);
    }
    // 十进制转化为 m 进制
    while(dec != 0) {
        output[num++] = dec % m;
        dec /= m;
    }
    for(int i = num - 1;i >= 0;i--) {
        cout << int_to_char(output[i]);
    }
    cout << endl;
    return 0;
}
