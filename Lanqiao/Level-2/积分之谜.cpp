#include <iostream>
#include <vector>
using namespace std;
int main()
{
    for(int a = 0;a <= 150;a++) {
        for(int b = 0;b <= 150;b++) {
            for(int c = 0;c <= 150;c++) {
                if(3 * a + 7 * b + c == 315 && 4 * a + 10 * b + c == 420) {
                    cout << a + b + c << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}