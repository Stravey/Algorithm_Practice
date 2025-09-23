#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string word;
    cin >> word;
    if(word[0] >= 'a' && word[0] <= 'z') {
        word[0] -= 32; // 转为ASCII码 小写转大写
    }
    cout << word << endl;
    return 0;
}