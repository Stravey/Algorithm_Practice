#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    string ss[45];
    int length[45] = {};
    int n = 0;
    while(cin >> ss[n]) {
        length[n] = ss[n].length();
        n++;
    }
    int maxx = 0;
    for(int j = n - 1; j >= 0; j--) {
        length[j] = max(length[j], maxx);
        maxx = length[j];
    }
    for(int k = 0; k < maxx; k++) {
        for(int j = 0; j < n; j++) {
            if(k >= length[j]) {
                break;
            }
            if(ss[j].length() <= k) {
                cout << " ";
            } else {
                cout << ss[j][k];
            }
        }
        cout << endl;
    }
    return 0;
}