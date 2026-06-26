#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<int, bool> course;
    unordered_map<int, int> score;

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        course[c] = true;
    }

    for (int i = 0; i < m; i++){
        int c, s;
        cin >> c >> s;
        score[c] = s;
    }
    int ans = 0;
    int fail = 0;

    for(auto& p : course) {
        int code = p.first;
        if(score.find(code) == score.end()) {
            ans++;
        } else {
            if(score[code] < 60) {
                fail++;
            }
        }
    }

    cout << ans << ' ' << fail << endl;
    return 0;
}