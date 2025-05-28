#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,opt,l,r;
    string s,a;
    cin >> n;
    cin >> s;
    while (n--) {
        cin >> opt;
        if(opt == 1) {
            cin >> a;
            s.append(a);
            cout << s << endl;
        } else if(opt == 2) {
            cin >> l >> r;
            s = s.substr(l,r);
            cout << s << endl;
        } else if(opt == 3) {
            cin >> l >> a;
            s.insert(l,a);
            cout << s << endl;
        } else {
            cin >> a;
            cout << (int)s.find(a) << endl;
        }
    }
    return 0;
}