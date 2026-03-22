#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T --)
    {
        int maxn = -1; //记录最大长度
        string str, maxs; //记录最大长度时的字符
        cin >> str;
        for(int i = 0; i < str.size(); i ++)
        {
            int j = i;
            int cnt = 0;
            while(str[j] == str[i] && j < str.size())
                j ++, cnt ++;
            if(cnt > maxn)//更新最大值
                maxn = cnt, maxs = str[i];
            i = j - 1; 
        }
        cout << maxs << " " << maxn << endl;
    }
}
