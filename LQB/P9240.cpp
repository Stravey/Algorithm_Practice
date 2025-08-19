// P9240 [À¶ÇÅ±­ 2023 Ê¡ B] Ò±Á¶½ðÊô
#include <iostream>
using namespace std;

int main()
{
    int n,least = 0,most = 1e9;
    cin >> n;
    while(n--) {
        int a,b;
        cin >> a >> b;
        least = max(least,a / (b + 1) + 1);
        most = min(most,a / b);
    }
    cout << least << " " << most << endl;
    return 0;
}