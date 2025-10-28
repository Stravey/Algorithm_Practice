#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    vector<bool> canSum(20000,false);
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            canSum[a[i] + a[j]] = true;
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++) {
        if(canSum[a[i]]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}