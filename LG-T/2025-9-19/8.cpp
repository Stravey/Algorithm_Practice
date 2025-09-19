#include <iostream>
using namespace std;
// 一共5道题
// (1) 将 8 位二进制补码 11010011 解释为带符号的二进制补码表示，其对应的十进制值是______________。
// (2) 十进制小数 5.4375 对应的二进制小数是____________。
/* (3)
#include <iostream>
using namespace std;

void calc(int* a) {
    cout << sizeof(a);
}

int main() {
    int a[154];
    calc(a);
}
会输出________。
*/
// (4) 有6位同学，从中选择2位同学（不分先后、无角色区分）来主持学校组织的文艺晚会，共有_______种选择方案。
// (5) 在标准 C++ 14 中，int main() 函数的返回值可以省略（即，在其中写 return 0; 不是必须的）。
//  如果你认为这句话正确，请回答 T；如果认为这句话错误，请回答 F。你的答案是_____________。

string answers[] = {
    "-45",
    "101.0111",
    "8",
    "15",
    "T"
};

int main() {
    int x;
    cin >> x;
    cout << answers[x - 1] << endl;
    return 0;
}
