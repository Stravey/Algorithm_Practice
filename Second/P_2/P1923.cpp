#include <iostream>
#define max_n 5000005
using namespace std;

int n,k,a[max_n];
int ans = 0;

void find_k(int a[],int l,int r) {
    if(l == r) {
        ans = a[l];
        return;
    }
    int i = l,j = r,flag = a[(l + r) / 2];
    do {
        while(a[i] < flag) {
            i++;
        }
        while(a[j] > flag) {
            j--;
        }
        if(i <= j) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    if(k <= j) {
        find_k(a,l,j); 
    } else if(i <= k) {
        find_k(a,i,r);
    } else {
        find_k(a,j + 1,i - 1);
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 0;i < n - 1;i++) {
        cin >> a[i];
    }
    find_k(a,0,n - 1);
    cout << ans << endl;
    return 0;
}