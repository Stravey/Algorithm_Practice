/*

vector 变长数组 倍增(系统为某一程序申请空间时 与空间大小无关 与申请次数有关 尽量减少申请次数)
    size() 数组大小
    empty() 是否为空
    clear() 清空
    front()/back() 首/尾元素
    push_back()/pop_back()
    begin()/end()
    erase()
    []
    支持比较运算 字典序比较
    
pair<int,int> 存储二元组
    p.first 第一个元素
    p.second 第二个元素
    支持比较运算 先1后2
    make_pair 
    pair<int, pair<int, int>> 存三个数
    
string 字符串 substr() c_str()
    size()/length() 返回字符串长度
    empty()
    clear()
    
queue 队列 
    size() 大小
    empty() 判空
    push() 入队
    front() 队头元素
    back() 队尾元素
    pop() 出队
    无clear() 
    
priority_queue 优先队列 堆 默认大根堆
    push() 插入一个元素 
    top()  返回堆顶元素
    pop()  弹出堆顶元素
    

stack 栈 
    size()
    empty()
    push() 插入一个元素
    top() 返回栈顶元素
    pop() 弹出栈顶元素

deque 双端队列 随机访问 
    size()
    empty()
    clear()
    front()
    back()
    push_back()
    pop_back()
    push_front()
    pop_front()
    begin()/end()
    []

set map multiset multimap 基于平衡二叉树 动态维护有序序列 红黑树 
    size()
    empty()
    clear()
    begin()/end() 支持++ -- 
       
    set/multiset
        insert() 插入一个数
        find() 查找一个数
        count() 返回某一个数的个数
        erase() 
            (1) 输入是一个数x 删除所有x  O(logn)
            (2) 输入一个迭代器 删除这个迭代器
        lower_bound() 大于等于x最小的数的迭代器
        upper_bound() 大于x的最小的数的迭代器
    
    map/multimap
        insert() 插入的数是一个pair 
        erase() 输入的参数是pair或迭代器
        find()
        []
        lower_bound()
        upper_bound()
               
unordered_map unordered_set unordered_multiset unordered_multimap 基于哈希表实现
    和上述类似 增删改查 O(1) 
    不支持lower_bound()/upper_bound() ++ --
    
bitset 压位
    bitset<10000> s;
    ~ & | ^
    >> <<
    == !=
    []
    
    count() 返回多少个1
    any() 判断至少有1个1
    none() 是否全为0
    
    set() 所有位置为1
    ser(k, v) 将第k位变为v
    reset() 所有位置0
    flip() 等价于~
    flip(k) 将第k位取反
    
list 用的不多

*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <set>

using namespace std;

void test01()
{
    vector<int> a;
    
    for(int i = 0; i < 10; i++) a.push_back(i);
    
    for(int i = 0; i < a.size(); i++) cout << a[i] << ' ';
    cout << endl;
    
    for(vector<int>::iterator i = a.begin(); i != a.end(); i++) cout << *i << ' ';
    cout << endl;
    
    for(auto x : a) cout << x << ' ';
    cout << endl;
    
}

void test02()
{
    pair<int, string> p;
    // int x = p.first;
    // int y = p.second;
    
    p = {10, "lyr"};
    
}

void test03()
{
    string s = "lyr";
    
    s += "ab";
    s += "c";
    
    cout << s << endl;
    
    cout << s.substr(1, 4) << endl;
}

void test04()
{
    priority_queue<int> heap;
    
    priority_queue<int, vector<int>, greater<int>> heap;
    
}

void test05()
{
    set<int> s;
    multiset<int> u;
}

int main()
{
    
    return 0;
}
