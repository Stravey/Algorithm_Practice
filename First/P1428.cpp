#include<iostream>
#define N 105
using namespace std;

int n,a[N],b[N];

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) 
    {
        for(int j = i;j >= 0;j--) 
        {
            if(a[j] < a[i]) 
            {
                b[i]++;
            }
        }
    }
    for(int i = 0;i < n;i++) {
        cout << b[i] << " ";
    }
    return 0;
}