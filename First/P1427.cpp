#include<iostream>
#include<vector>
using namespace std;
#define N 105
int a[N],c = 0;

vector<int> v;
int k;

int main() 
{
    // 第一种
    /* for(int i = 0;;i++) 
    {  
        cin >> a[i];
        if(a[i] == 0)
        {
            break;
        }
        c = i;
    }
    for (int i = c;i >= 0;i--)
    {
        cout << a[i] << " ";
    } */

    // 第二种做法
    while(1) 
    {
        cin >> k;
        if(k == 0)
        {
            break;
        }
        v.push_back(k);
    }
    while(!v.empty()) 
    {
        cout << v.back() << " ";
        v.pop_back();
    }
    
    return 0;
}