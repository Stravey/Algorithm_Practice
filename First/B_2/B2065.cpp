#include <iostream>
using namespace std;

double n,x,y,a,b;
double p,q;

int main()
{
    cin >> n;
    cin >> a >> b;
    //��β����Ч��
    p = b / a;
    for(int i = 2;i <= n;i++) {
        cin >> x >> y;
        //���Ʒ���Ч��
        q = y / x;
        if(q - p > 0.05) {
            cout << "better" << endl;
        } else if(p - q > 0.05) {
            cout << "worse" << endl; 
        } else {
            cout << "same" << endl;
        }
    }
    return 0;
}