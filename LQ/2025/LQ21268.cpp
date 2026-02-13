#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    // B在第二个位置
    if((A < B && B < C) || (A > B && B > C)) {
        cout << 0 << endl;
        return 0;
    } else {
        int cnt = min(abs(A - C), min(abs(B-C), abs(A-B)));
        cout << cnt << endl;
    }
    return 0;
}