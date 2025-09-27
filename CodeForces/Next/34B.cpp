#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    vector<int> prices(n);
    for(int i = 0;i < n;i++) {
        cin >> prices[i];
    }

    sort(prices.begin(),prices.end());

    int max_earning = 0;
    int cnt = 0;

    for(int price : prices) {
        if(price >= 0) {
            break;
        }

        if(cnt < m) {
            max_earning += -price;
            cnt++;
        } else {
            break;
        }
    }

    cout << max_earning << endl;
    return 0;
}