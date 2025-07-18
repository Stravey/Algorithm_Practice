#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

void preorder(string in,string after) {
    if (in.size() > 0){
        char ch = after[after.size()-1];
        cout << ch; 
        int k=in.find(ch);
        preorder(in.substr(0,k),after.substr(0,k));
        preorder(in.substr(k+1),after.substr(k,in.size()-k-1));
    }
}

int main()
{
    string a,b;
    cin >> a >> b;
    preorder(a,b);cout<<endl;
    return 0;
}