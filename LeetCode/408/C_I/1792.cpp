#include <bits/stdc++.h>
using namespace std;
// ranges 是C++20引入的函数库
// 优先队列
double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    struct Pair{
        int a,b;
    };
    auto cmp = [](const Pair& a, const Pair& b) {
        return 1LL * (a.b - a.a) * b.b * (b.b + 1) < 1LL * (b.b - b.a) * a.b * (a.b + 1);
    };
    vector<Pair> h;
    for(auto& c : classes) {
        h.emplace_back(c[0],c[1]);
    }
    //ranges::make_heap(h,cmp);
    while(extraStudents--) {
        //ranges::pop_heap(h,cmp);
        auto& [a,b] = h.back();
        a++;
        b++;
        //ranges::push_heap(h,cmp);
    }
    double sum = 0;
    for(auto& [a,b] : h) {
        sum += 1.0 * a / b;
    }
    return sum / h.size();
}

int main()
{
    cout << "Hello World!" <<  endl;
    return 0;
}