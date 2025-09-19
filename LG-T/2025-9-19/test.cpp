#include <iostream>
using namespace std;

void calc(int* a) {
    cout << sizeof(a);
}

int main() {
    int a[154];
    calc(a);
}