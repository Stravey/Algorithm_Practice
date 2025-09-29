#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    
    int current_sum = 0;
    for(int grade : a) {
        current_sum += grade;
    }
    int required_sum = (4 * n) + n / 2 + (n % 2);

    if(current_sum >= required_sum) {
        cout << 0 << endl;
        return 0;
    }

    sort(a.begin(),a.end());

    int cnt = 0;
    for(int i = 0;i < n;i++) {
        current_sum += (5 - a[i]);
        cnt++;
        if(current_sum >= required_sum) {
            break;
        }
    } 
    cout << cnt << endl;
    return 0;
}