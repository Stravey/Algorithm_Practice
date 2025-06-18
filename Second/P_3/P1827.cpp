#include <iostream>
#include <cstring>
using namespace std;

string pre_s,in_s;

void build(int pre_left,int pre_right,int in_left,int in_right) {
    if(pre_left > pre_right || in_left > in_right) {
        return;
    }
    // 二叉树根结点
    char root = pre_s[pre_left];
    // 找根的位置
    int root_pos = in_s.find(root,in_left);

    build(pre_left + 1,pre_left + (root_pos - in_left),in_left,root_pos - 1);
    build(pre_left + (root_pos - in_left) + 1,pre_right,root_pos + 1,in_right);

    cout << root;
}

int main()
{
    cin >> in_s;
    cin >> pre_s;
    build(0,pre_s.size() - 1,0,in_s.size() - 1);
    return 0;
}