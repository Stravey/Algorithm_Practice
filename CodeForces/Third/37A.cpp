#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> cnt;
    for(int i = 0;i < n;i++) {
        int length;
        cin >> length;
        cnt[length]++;
    }
    int max_height = 0;
    int sum = cnt.size();
    for(auto& p : cnt) {
        if(p.second > max_height) {
            max_height = p.second;
        }
    }
    cout << max_height << " " << sum << endl;
    return 0;
}