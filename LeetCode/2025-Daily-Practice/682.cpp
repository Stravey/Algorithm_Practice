#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
// 选择结构 棒球比赛
int calPoints(vector<string>& operations) {
    vector<int> st;
    for(const auto& s : operations) {
        if(s == "+") {
            st.push_back(st[st.size() - 1] + st[st.size() - 2]);
        } else if(s == "D") {
            st.push_back(st.back() * 2);
        } else if(s == "C") {
            st.pop_back();
        } else {
            st.push_back(stoi(s));
        }
    }
    return accumulate(st.begin(),st.end(),0);
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}