#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n,k,t,m,cnt = 0,x;
set<int> seeds;
bool valid = true;

int main()
{
    cin >> n >> k;
    for(int i = 0;i < k;i++) {
        cin >> t;
        seeds.insert(t);
    }
    m = n / k;
    for (int i = 0; i < k; i++) {
        cnt = 0;
        for (int j = 0; j < m; j++) {
            cin >> x;
            if (seeds.count(x) > 0) {
                cnt++;
            }
        }
        if (cnt != 1) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "MiaoW" : "\\QAQ/") << endl;
    return 0;
}