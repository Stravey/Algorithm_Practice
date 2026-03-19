#include <bits/stdc++.h>

std::string s;

int main()
{
    std::string s;
    std::cin >> s;
    double a, b;
    std::cin >> a >> b;
    double ans = a + b * 0.15;
    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << ans << std::endl;
    return 0;
}