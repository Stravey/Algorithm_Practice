#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int x : a) {
        // 最好价格
        int b_price = x;
        // 某音
        int y_price = x - x / 20;
        // 某猫
        int m_price = x;
        if(m_price >= 500) {
            m_price = x - x / 10;
        }
        // 某东
        int d_price = x;
        if(d_price >= 1000) {
            d_price = x - 150;
        }
        if(b_price == 1111) {
            y_price = 0;
        }
        b_price = min(b_price, y_price);
        b_price = min(b_price, m_price);
        b_price = min(b_price, d_price);
        sum += b_price;
    }
    cout << sum << endl;
    return 0;
}