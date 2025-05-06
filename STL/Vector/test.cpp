#include <iostream>
#include <vector>
using namespace std;

// std::vector<类型名> 变量名;

// vector元素的第一种访问方式
void test_01()
{
    vector<int> my_vector(4,1);
    cout << my_vector[1] << endl;
}
// vector元素的第二种访问方式
void test_02()
{

}


// push_back()
void test_03()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i + 1);
    }
    for(vector<int>::iterator it = v.begin();it < v.end();it++)
    {
        cout << *it << " ";
    }
}

// pop_back()
void test_04()
{
    std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << " ";
	}
	for (int i = 0; i < 5; i++) {
		v.pop_back();
	}
	cout << endl;
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << " ";
	}
}


int main()
{
    //test_01();
    //test_03();
    test_04();
    return 0;
}