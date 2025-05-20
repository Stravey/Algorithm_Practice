#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <utility>  
using namespace std;

string to_lower(string s) {
    string res = s;
    for(char& c : res) {
        c = tolower(c);
    }
    return res;
}

int main()
{
    string target,article;
    getline(cin,target);
    getline(cin,article);

    target = to_lower(target);

    vector<pair<string,int>> words;
    int start = 0;
    int position = 0;
    while (position < article.size()) {
        if (article[position] == ' ') {
            if (position > start) {
                words.push_back({article.substr(start, position - start), start});
            }
            start = position + 1;
        }
        position++;
    }
    if (position > start) {
        words.push_back({article.substr(start, position - start), start});
    }

    int cnt = 0;
    int fp = -1;
    for (const auto& pair : words) {
        const string& word = pair.first;
        int idx = pair.second;
        if (to_lower(word) == target) {
            cnt++;
            if (fp == -1) {
                fp = idx;
        }
    }
}

    if(cnt > 0) {
        cout << cnt  << " " << fp << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}