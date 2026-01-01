#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
#include <algorithm>
using namespace std;
class DSU {
public:
    vector<int> parent;
    DSU(int size) {
        parent.resize(size);
        iota(parent.begin(),parent.end(),0);
    }
    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
    void join(int u,int v) {
        parent[find(v)] = find(u);
    }
};
class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        DSU dsu(c + 1);
        for(auto & p : connections) {
            dsu.join(p[0],p[1]);
        }
        vector<bool> online(c + 1,true);
        vector<int> offLineCounts(c + 1,0);
        unordered_map<int,int> minimumon;
        for(auto& q : queries) {
            int op = q[0],x = q[1];
            if(op == 2) {
                online[x] = false;
                offLineCounts[x]++;
            }
        }
        for(int i = 1;i <= c;i++) {
            int root = dsu.find(i);
            if(!minimumon.count(root)) {
                minimumon[root] = -1;
            }
            int station = minimumon[root];
            if(online[i]) {
                if(station == -1 || station > i) {
                    minimumon[root] = i;
                }
            }
        }
        vector<int> ans;
        for(int i = (int)queries.size() - 1;i >= 0;i--) {
            int op = queries[i][0],x = queries[i][1];
            int root = dsu.find(x);
            int station = minimumon[root];
            if(op == 1) {
                if(online[x]) {
                    ans.push_back(x);
                } else {
                    ans.push_back(station);
                }
            }
            if(op == 2) {
                if(offLineCounts[x] > 1) {
                    offLineCounts[x]--;
                } else {
                    online[x] = true;
                    if(station == -1 || station > x) {
                        minimumon[root] = x;
                    }
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    return 0;
}