#include<iostream>
#include<cstring>
#include<cstdlib> 
using namespace std;

int main() 
{
    int a, b;
    int max = 0;  
    int day = 0;  
    
    for(int i = 1; i <= 7; i++) 
    {
        cin >> a >> b;
        int sum = a + b;
        
        if(sum > 8 && sum > max)  
        {
            max = sum;
            day = i;  
        }
    }
    
    cout << day;
    return 0;
}