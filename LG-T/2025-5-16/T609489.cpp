#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    if (n <= 2) {
        cout << n << endl;
        return 0;
    }
    
    int max_len = 2;
    int current_len = 2;
    
    for (int i = 2; i < n; ++i) {
        if (v[i] - v[i-1] == v[i-1] - v[i-2]) {
            current_len += 1;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 2;
        }
    }
    
    cout << max_len << endl;
    return 0;
}

