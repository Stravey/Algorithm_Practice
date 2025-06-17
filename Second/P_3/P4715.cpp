#include <iostream>
using namespace std;

int n;
int value[520],winner[520];

void dfs(int x) {
    if(x >= (1 << n)) {
        return;
    } else {
        dfs(2 * x);
        dfs(2 * x + 1);
        int left_value = value[2 * x];
        int right_value = value[2 * x + 1];
        if(left_value > right_value) {
            value[x] = left_value;
            winner[x] = winner[2 * x];
        } else {
            value[x] = right_value;
            winner[x] = winner[2 * x + 1];
        }
    }
}


int main()
{
    cin >> n;
    for(int i = 0;i < (1 << n);i++) {
        cin >> value[i + (1 << n)];
        winner[i + (1 << n)] = i + 1;
    }
    dfs(1);
    cout << (value[2] > value[3] ? winner[3] : winner[2]);
    return 0;
}