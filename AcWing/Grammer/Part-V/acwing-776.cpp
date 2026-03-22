#include <iostream>
#include <string>

using namespace std;

bool check(string a, string b)
{
    int len = a.size();
    a += a; //复制字符串连接
    if (a.find(b) != string::npos) return true; //判断a中是否包含b
    return false;
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
    if (check(a, b)) cout << "true";
    else cout << "false";
    return 0;
}
