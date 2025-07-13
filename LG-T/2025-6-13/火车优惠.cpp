#include <iostream>
#include <climits>
using namespace std;

int x;

int getFee(int d) {
    if(d <= 0) {
        return 0;
    }
    int fee = 0;
    if(d <= 10) {
        fee = d * 20;
        return fee;
    }
    fee += 10 * 20;
    d -= 10;
    if(d <= 40) {
        int part_1 = (d + 4) / 5;
        fee += part_1 * 80;
        return fee;
    }
    fee += 8 * 80;
    d -= 40;
    int part_2 = (d + 9) / 10;  // 向上取整
    fee += part_2 * 120;
    return fee;
}

int main()
{
    cin >> x;
    int minFee = INT_MAX;
    minFee = getFee(x);
    for(int i = 1;i < x;i++) {
        int j = x - i;
        int totalFee = getFee(i) + getFee(j);
        if(totalFee < minFee) {
            minFee = totalFee;
        }
    }
    cout << minFee << endl;
    return 0;
}