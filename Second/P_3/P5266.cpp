#include <iostream>
#include <map>
using namespace std;

map<string,int> m;
int n,opt,score;
string name;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> opt;
        if(opt == 1) {
            cin >> name >> score;
            m[name] = score;
            cout << "OK" << endl;
        } else if(opt == 2) {
            cin >> name;
            if(m.find(name) == m.end()) {
                cout << "Not found" << endl;
            } else {
                cout << m[name] << endl;
            }
        } else if(opt == 3) {
            cin >> name;
            if(m.find(name) == m.end()) {
                cout << "Not found" << endl;
            } else {
                m.erase(name);
                cout << "Deleted successfully" << endl;
            }
        } else if(opt == 4){
            cout << m.size() << endl;
        }
    }
    return 0;
}