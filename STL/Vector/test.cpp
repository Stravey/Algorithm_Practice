#include <iostream>
#include <vector>
using namespace std;

// std::vector<������> ������;

// vectorԪ�صĵ�һ�ַ��ʷ�ʽ
void test_01()
{
    vector<int> my_vector(4,1);
    cout << my_vector[1] << endl;
}
// vectorԪ�صĵڶ��ַ��ʷ�ʽ
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