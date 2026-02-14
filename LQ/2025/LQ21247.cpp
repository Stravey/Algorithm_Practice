#include <iostream>
using namespace std;
int main()
{
    long long l;
    cin >> l;
    for(long long x = 1; x; x++) {
        long long s = x * (x + 1) / 2;
        if(s < l) {
            continue;
        }
        if((s - l) % 2 == 0) {
            cout <<x;
            break;
        }
    }
  return 0;
}