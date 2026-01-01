#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
// ¹þÏ£±í
unordered_map<int,int> m;
int distributeCandies(vector<int>& candyType) {
    int n = candyType.size();
    int max_eat_candy = n / 2;
    for(int i : candyType) {
        m[i]++;
    }
    int totalsize = m.size();
    return min(max_eat_candy,totalsize);
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}