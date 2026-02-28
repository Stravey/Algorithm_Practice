#ifndef MY_SORT_H
#define MY_SORT_H

#include <vector>
#include <map>

class My_sort
{
private:
    //二路归并排序算法最短段长度，少于此值时将使用折半插入排序以提升性能，推荐值64（设置为0则取消折半插入排序）
    const static int MERGE_SORT_SHORTEST_SEGMENT_LENGTH = 64;
    //快速排序算法最短段长度，少于此值时将使用折半插入排序以提升性能，推荐值16（设置为0则取消折半插入排序）
    const static int QUICK_SORT_SHORTEST_SEGMENT_LENGTH = 16;
    //快速排序算法最大递归深度，大于此值时将使用堆排序以避免性能恶化，推荐值32（设置为0则取消堆排序）
    const static int QUICK_SORT_MAXIMUM_RECURSION_DEPTH = 32;
    //桶排序算法平均每个桶内的元素数量，推荐值128
    const static int BUCKET_SORT_DEFAULT_NUM_OF_ELEMENTS_IN_BUCKETS = 128;

    //交换两个元素
    //内联函数
    template <typename T>
    inline static void swap(T &t1, T &t2)
    {
        T temp = t1;
        t1 = t2;
        t2 = temp;
    }

    //计算10的正整数次幂 内联
    inline static int ten_power(int n)
    {
        int result = 1;

        for (int i = 0; i < n; i++)
            result *= 10;

        return result;
    }

    //建立大根堆，仅用于堆排序
    template <typename T>
    static void build_heap(T data[], int first, int last)
    {
        //从first起开始向下调整
        int parent = first;
        int child = parent * 2 + 1; //实际上是左孩子

        //向下递归调整
        while (child <= last)
        {
            //比较左孩子和右孩子，将child指向较大的那个孩子
            if (child + 1 <= last && data[child] < data[child + 1])
                child++;

            if (data[parent] > data[child]) //父节点大于两个子节点，无需向下调整
                return;
            else //否则交换父节点与较大子节点，然后向下递归调整
            {
                swap(data[parent], data[child]);
                parent = child;
                child = child * 2 + 1;
            }
        }
    }

public:
    //冒泡排序
    template <typename T>
    static void bubble_sort(T data[], int length)
    {
        for (int i = 0; i < length; i++) {
            for (int j = i; j < length; j++) {
                if (data[i] > data[j]) {
                    swap(data[i], data[j]);
                }
            }
        }
    }

    //选择排序
    template <typename T>
    static void selection_sort(T data[], int length)
    {
        for (int i = 0; i < length; i++) {
            //查找最小的元素
            int min_index = i;
            for (int j = i; j < length; j++) {
                if (data[j] < data[min_index]) {
                    min_index = j;
                }
            }

            //将其放在指定位置
            swap(data[i], data[min_index]);
        }
    }

    //简单插入排序
    template <typename T>
    static void insertion_sort(T data[], int length)
    {
        for (int i = 1; i < length; i++)
        {
            //数组分为两部分：[0, i-1]为有序区，[i, length-1]为无序区，data[i]为待插入元素

            //1. 顺序查找data[i]的插入位置
            int insert_index;
            for (insert_index = 0; insert_index < i; insert_index++)
            {
                if (data[insert_index] < data[i])
                    continue;
                else
                    break;
            }

            //2. 暂存data[i]
            T temp = data[i];

            //3. 将插入位置之后的元素后移一格
            for (int j = i; j > insert_index; j--)
                data[j] = data[j - 1];

            //4. 插入data[i]
            data[insert_index] = temp;
        }
    }

    //折半插入排序
    template <typename T>
    static void binary_search_insertion_sort(T data[], int length)
    {
        for (int index = 1; index < length; index++)
        {
            //数组分为两部分：[0, index-1]为有序区，[index, length-1]为无序区，data[index]为待插入元素

            //折半查找的区间范围[left, right]
            int left = 0, right = index - 1;
            int insert_index = 0;

            //1. 折半查找
            while (true)
            {
                if (left == right)
                {
                    if (data[index] < data[left])
                        insert_index = left;
                    else
                        insert_index = left + 1;

                    break;
                }
                else if (right - left == 1)
                {
                    if (data[index] < data[left])
                        insert_index = left;
                    else if (data[index] < data[right])
                        insert_index = right;
                    else
                        insert_index = right + 1;

                    break;
                }
                else
                {
                    int mid = (left + right) / 2;
                    if (data[index] < data[mid])
                        right = mid;
                    else
                        left = mid;
                }
            }

            //2. 暂存data[index]
            T temp = data[index];

            //3. 将插入位置之后的元素后移一格
            for (int j = index; j > insert_index; j--)
                data[j] = data[j - 1];

            //4. 插入data[index]
            data[insert_index] = temp;
        }
    }

    //shell排序
    template <typename T>
    static void shell_sort(T data[], int length)
    {
        //初始增量为数组长度的一半，此后每次减半，直至减为1
        for (int increment = length / 2; increment > 0; increment /= 2)
        {
            //按照增量将元素分组，组内使用折半插入排序
            for (int group = 0; group < increment; group++)
            {
                //group为组号，即该组起始元素的地址偏移；index为组内地址
                //组内地址映射数组地址：data[group + increment * index]
                for (int index = 1; group + increment * index < length; index++)
                {
                    //折半查找的区间范围
                    int left = 0, right = index - 1;
                    int insert_index = 0;

                    //1. 折半查找
                    while (true)
                    {
                        if (left == right)
                        {
                            if (data[group + increment * index] < data[group + increment * left])
                                insert_index = left;
                            else
                                insert_index = left + 1;

                            break;
                        }
                        else if (right - left == 1)
                        {
                            if (data[group + increment * index] < data[group + increment * left])
                                insert_index = left;
                            else if (data[group + increment * index] < data[group + increment * right])
                                insert_index = right;
                            else
                                insert_index = right + 1;

                            break;
                        }
                        else
                        {
                            int mid = (left + right) / 2;
                            if (data[group + increment * index] < data[group + increment * mid])
                                right = mid;
                            else
                                left = mid;
                        }
                    }

                    //2. 暂存data[group + increment * index]
                    T temp = data[group + increment * index];

                    //3. 将插入位置之后的元素后移一格
                    for (int j = index; j > insert_index; j--)
                        data[group + increment * j] = data[group + increment * j - increment];

                    //4. 插入data[group + increment * index]
                    data[group + increment * insert_index] = temp;
                }
            }
        }
    }

    //堆排序
    template <typename T>
    static void heap_sort(T data[], int length)
    {
        //建立初始堆，从最后一个非叶子节点起向前向上调整
        for (int i = length / 2 - 1; i >= 0; i--)
            build_heap(data, i, length - 1);

        //将堆顶元素与堆末尾元素交换，并调整堆
        for (int i = length - 1; i > 0; i--)
        {
            swap(data[0], data[i]);
            build_heap(data, 0, i - 1);
        }
    }

    //二路归并排序
    template <typename T>
    static void merge_sort(T data[], int length)
    {
        //处理最小情形
        if (length <= 1)
            return;
        else if (length == 2)
        {
            if (data[0] > data[1])
                swap(data[0], data[1]);
            return;
        }
        else if (length <= MERGE_SORT_SHORTEST_SEGMENT_LENGTH) //段长较小时使用折半插入排序以提升性能
        {
            binary_search_insertion_sort(data, length);
            return;
        }

        //划分段界
        int mid = length / 2, first = 0, last = length - 1;
        int a_first = first, a_last = (mid > first) ? mid : first;
        int b_first = (mid >= last) ? last : (mid + 1), b_last = last;
        int a_length = a_last - a_first + 1, b_length = b_last - b_first + 1;

        //分治
        merge_sort(&data[a_first], a_length);
        merge_sort(&data[b_first], b_length);

        //以下为归并
        int a_index = a_first, b_index = b_first;
        std::vector<T> temp;

        //此时a,b已组内有序，将a,b的首元素较小者归并到temp，直到其中一组归并完毕
        while (a_index <= a_last && b_index <= b_last)
        {
            if (data[a_index] < data[b_index])
                temp.push_back(data[a_index++]);
            else
                temp.push_back(data[b_index++]);
        }

        //未归并完的另一组的剩余元素直接并入
        while (a_index <= a_last)
            temp.push_back(data[a_index++]);
        while (b_index <= b_last)
            temp.push_back(data[b_index++]);

        //将归并好的段复制回原来的位置
        for (size_t i = 0; i < temp.size(); i++)
            data[i] = temp[i];
    }

    //快速排序
    template <typename T>
    static void quick_sort(T data[], int length, int recursion_depth = 0)
    {
        if (length <= 1)
            return;
        else if (length <= QUICK_SORT_SHORTEST_SEGMENT_LENGTH) //段长较小时使用折半插入排序以提升性能
        {
            binary_search_insertion_sort(data, length);
            return;
        }

        //超过最大递归深度时改用堆排序，以避免性能恶化
        if (recursion_depth >= QUICK_SORT_MAXIMUM_RECURSION_DEPTH)
        {
            heap_sort(data, length);
            return;
        }

        //选定枢轴元素
        T pivot = data[0];
        int left = 0, right = length - 1;

        //一趟排序后确定枢轴的最终位置
        while (left < right)
        {
            //（此时left指向枢轴）从右往左扫描，找到第一个小于枢轴的元素，与枢轴交换
            while (left < right && data[right] >= pivot)
                right--;
            swap(data[left], data[right]);

            //（此时right指向枢轴）从左往右扫描，找到第一个大于枢轴的元素，与枢轴交换
            while (left < right && data[left] <= pivot)
                left++;
            swap(data[left], data[right]);
        }

        //（此时left和right都指向枢轴）以枢轴为中心，划分段界
        int mid = left, first = 0, last = length - 1;
        int a_first = first, a_last = (mid > first) ? mid : first;
        int b_first = (mid >= last) ? last : (mid + 1), b_last = last;
        int a_length = a_last - a_first + 1, b_length = b_last - b_first + 1;

        //分治
        quick_sort(&data[a_first], a_length, recursion_depth + 1);
        quick_sort(&data[b_first], b_length, recursion_depth + 1);
    }

    //计数排序，仅适用于整型数据的排序
    template <typename T>
    static void counting_sort(T data[], int length)
    {
        //首先确定排序数组的值域
        T data_min = data[0], data_max = data[0];
        for (int i = 0; i < length; i++)
        {
            if (data[i] < data_min)
                data_min = data[i];
            if (data[i] > data_max)
                data_max = data[i];
        }

        //建立计数器
        std::vector<T> counter(data_max - data_min + 1, 0);

        //统计
        for (int i = 0; i < length; i++)
            counter[data[i]]++;

        //反向填充数组
        int counter_index = 0;
        for (int i = 0; i < length; i++)
        {
            while (counter[counter_index] == 0)
                counter_index++;

            data[i] = data_min + counter_index;
            counter[counter_index]--;
        }
    }

    //桶排序
    template <typename T>
    static void bucket_sort(T data[], int length)
    {
        //根据排序元素数量，确定桶的数量
        int num_of_buckets = length / BUCKET_SORT_DEFAULT_NUM_OF_ELEMENTS_IN_BUCKETS; 
        if (num_of_buckets == 0)
            num_of_buckets = 1;

        //首先确定排序数组的值域
        T data_min = data[0], data_max = data[0];
        for (int i = 0; i < length; i++)
        {
            if (data[i] < data_min)
                data_min = data[i];
            if (data[i] > data_max)
                data_max = data[i];
        }

        //确定桶的值域宽度
        int range_of_bucket = (int)(data_max - data_min + 1) / num_of_buckets;

        std::map<T, std::vector<T>> buckets;

        //将元素装入对应的桶，采用data[i] / range_of_bucket方式映射，使得桶内无序，桶间有序
        for (int i = 0; i < length; i++)
            buckets[data[i] / range_of_bucket].push_back(data[i]);

        //对桶内元素使用折半插入排序
        for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
            binary_search_insertion_sort(map_iter->second.data(), map_iter->second.size());

        //反向填充数组
        int index = 0;
        for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
            for (typename std::vector<T>::iterator vec_iter = map_iter->second.begin(); vec_iter != map_iter->second.end(); vec_iter++)
                data[index++] = *vec_iter;
    }

    //基数排序，仅适用于整型数据的排序
    template <typename T>
    static void radix_sort(T data[], int length)
    {
        //确定最大元素
        T data_max = data[0];
        for (int i = 0; i < length; i++)
            if (data[i] > data_max)
                data_max = data[i];

        //根据最大元素的十进制位数决定排序的趟数
        int trip = 0;
        while (data_max)
        {
            trip++;
            data_max /= 10;
        }

        std::map<T, typename std::vector<T>> buckets;

        //以从低到高的第bits位为依据排序
        for (int bits = 1; bits <= trip; bits++)
        {
            //分配
            for (int i = 0; i < length; i++)
                buckets[(data[i] % ten_power(bits)) / ten_power(bits - 1)].push_back(data[i]);

            //收集
            int index = 0;
            for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
                for (typename std::vector<T>::iterator vec_iter = map_iter->second.begin(); vec_iter != map_iter->second.end(); vec_iter++)
                    data[index++] = *vec_iter;
            
            buckets.clear();
        }
    }
};

#endif