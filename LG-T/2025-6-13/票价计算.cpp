#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int max(int x,int y,int z) {
    if(x > y && x > z) {
        return x;
    } else if(y > x && y > z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    int a1, b1, a2, b2, a3, b3, c;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> c;
    
    int maxTime = max(b1, b2, b3);
    
    int cost1 = a1 - (maxTime - b1) * c;
    int cost2 = a2 - (maxTime - b2) * c;
    int cost3 = a3 - (maxTime - b3) * c;
    
    int minCost = INT_MAX;
    int chosenBus = 1;

    if (cost1 <= minCost) {
        minCost = cost1;
        chosenBus = 1;
    }
    if (cost2 <= minCost) {
        minCost = cost2;
        chosenBus = 2;
    }
    if (cost3 <= minCost) {
        minCost = cost3;
        chosenBus = 3;
    }
    cout << chosenBus << " " << minCost << endl;
    return 0;
}