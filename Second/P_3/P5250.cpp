#include <iostream>
#include <set>
using namespace std;

//STL setºìºÚÊ÷ÊµÏÖ
set<int> s; 
int m,opt,len;

int main()
{
    cin >> m;
    for(int i = 1;i <= m;i++) {
        cin >> opt >> len;
        if(opt == 1) {
            if(s.find(len) != s.end()) {
                cout << "Already Exist" << endl;
            }
            s.insert(len);
        } else  {
            if(s.empty()) {
                cout << "Empty" << endl;
            } else {
                set<int> :: iterator it = s.lower_bound(len),bf = it;
                if(bf != s.begin()) {
                    bf--;
                }
                if(it != s.end() && len - *bf > *it - len) {
                    bf = it;
                }
                cout << *bf << endl;
                s.erase(bf);
            }
        }
    }
    return 0;
}
