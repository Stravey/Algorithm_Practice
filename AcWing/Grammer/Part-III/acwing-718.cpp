#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double total = 0, total_coneys = 0, total_rats = 0, total_frogs = 0;
    for(int i = 1; i <= n; i++) {
        int a;
        char c;
        cin >> a >> c;
        total += a;
        if(c == 'C') {
            total_coneys += a;
        } else if(c == 'R') {
            total_rats += a;
        } else if(c == 'F') {
            total_frogs += a;
        }
    }
    printf("Total: %.f animals\n", total);
    printf("Total coneys: %.f\n", total_coneys);
    printf("Total rats: %.f\n", total_rats);
    printf("Total frogs: %.f\n", total_frogs);
    printf("Percentage of coneys: %.2f % \n", total_coneys / total * 100);
    printf("Percentage of rats: %.2f % \n", total_rats / total * 100);
    printf("Percentage of frogs: %.2f % \n", total_frogs / total * 100);
    return 0;
}
