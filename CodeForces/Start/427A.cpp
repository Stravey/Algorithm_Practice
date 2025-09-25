#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int police = 0; // 警察数量
    int unrelated = 0; // 未治疗的犯罪
    for(int i = 0;i < n;i++) {
        int event;
        cin >> event;
        if(event == -1) {
            if(police > 0) {
                police--;
            } else {
                unrelated++;
            }
        } else {
            police += event;
        }
    }
    cout << unrelated << endl;
    return 0;
}