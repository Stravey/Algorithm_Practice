#include <iostream>
#include <algorithm>
using namespace std;
int n, A[100001];
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> A[i];
    }
    sort(A, A + n);
    // l表示去重后数组的长度
    int l = 1, r = 1;
    while(r < n) {
        if(A[r] != A[l - 1]) {
            A[l++] = A[r];
        } 
        r++;
    }
    int res = 0;
    for(int i = 0; i + 2 < l;i++) {
        int a = A[i];
        if(A[i + 1] == (a + 1) && A[i + 2] == (a + 2)) {
            res++;
        }
    }
    cout << res << endl;
    return 0;   
}