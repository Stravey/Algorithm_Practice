#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

#include "sort_template.h"

using namespace std;

template<typename T>
void show(T data[], int length)
{
    for (int i = 0; i < length; i++)
        cout << data[i] << " ";
    cout << endl;
}

int main()
{
    //装入数据
    vector<int> data;
    srand(0); //为对比各算法性能，需要每次装入相同的随机数序列
    int num_of_data = 100000000;
    for (int i = 0; i < num_of_data; i++)
        data.push_back(rand() % num_of_data);
    //vector<int> data_copy = data;
    
    
    //show(data.data(), data.size());

    
    //sort(data.begin(), data.end());
    //reverse(data.begin(), data.end());

    //排序算法
    //My_sort::bubble_sort(data.data(), data.size());
    //My_sort::selection_sort(data.data(), data.size());
    //My_sort::insertion_sort(data.data(), data.size());
    //My_sort::binary_search_insertion_sort(data.data(), data.size());
    //My_sort::shell_sort(data.data(), data.size());
    //My_sort::heap_sort(data.data(), data.size());
    //My_sort::merge_sort(data.data(), data.size());
    My_sort::quick_sort(data.data(), data.size());
    //My_sort::counting_sort(data.data(), data.size());
    //My_sort::bucket_sort(data.data(), data.size());
    //My_sort::radix_sort(data.data(), data.size());
    //sort(data.begin(), data.end());
    //stable_sort(data.begin(), data.end());

    //show(data.data(), data.size());


    /*
    //检验排序算法的正确性
    sort(data_copy.begin(), data_copy.end()); //使用C++默认排序算法作为标准答案
    for (size_t i = 0; i < data_copy.size(); i++)
    {
        if (data[i] != data_copy[i])
        {
            cout << "error at " << i << endl;
            break;
        }
    }
   */

    return 0;
}