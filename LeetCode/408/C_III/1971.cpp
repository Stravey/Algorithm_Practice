#include <iostream>
#include <vector>
using namespace std;
class UnionFind {
public:
    UnionFind(int n) {
        parent = vector<int>(n);
        rank = vector<int>(n);
        for(int i = 0;i < n;i++) {
            parent[i] = i;
        }
    }
    void uni(int x,int y) {
        int root_x = find(x);
        int root_y = find(y);
        if(root_x != root_y) {
            if(rank[root_x] > rank[root_y]) {
                parent[root_y] = root_x;
            } else if(rank[root_x] < rank[root_y]) {
                parent[root_x] = root_y;
            } else {
                parent[root_y] = root_x;
                rank[root_x]++;
            }
        }
    }
    int find(int x) {
        if(parent[x] != x) {
            return parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    bool connect(int x,int y) {
        return find(x) == find(y);
    }
private:
    vector<int> parent;
    vector<int> rank;
};
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) {
            return true;
        }
        UnionFind uf(n);
        for(auto edge : edges) {
            uf.uni(edge[0],edge[1]);
        }
        return uf.connect(source,destination);
    }
};
int main()
{
    return 0;
}