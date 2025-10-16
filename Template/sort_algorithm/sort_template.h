#ifndef MY_SORT_H
#define MY_SORT_H

#include <vector>
#include <map>

class My_sort
{
private:
    //��·�鲢�����㷨��̶γ��ȣ����ڴ�ֵʱ��ʹ���۰�����������������ܣ��Ƽ�ֵ64������Ϊ0��ȡ���۰��������
    const static int MERGE_SORT_SHORTEST_SEGMENT_LENGTH = 64;
    //���������㷨��̶γ��ȣ����ڴ�ֵʱ��ʹ���۰�����������������ܣ��Ƽ�ֵ16������Ϊ0��ȡ���۰��������
    const static int QUICK_SORT_SHORTEST_SEGMENT_LENGTH = 16;
    //���������㷨���ݹ���ȣ����ڴ�ֵʱ��ʹ�ö������Ա������ܶ񻯣��Ƽ�ֵ32������Ϊ0��ȡ��������
    const static int QUICK_SORT_MAXIMUM_RECURSION_DEPTH = 32;
    //Ͱ�����㷨ƽ��ÿ��Ͱ�ڵ�Ԫ���������Ƽ�ֵ128
    const static int BUCKET_SORT_DEFAULT_NUM_OF_ELEMENTS_IN_BUCKETS = 128;

    //��������Ԫ��
    //��������
    template <typename T>
    inline static void swap(T &t1, T &t2)
    {
        T temp = t1;
        t1 = t2;
        t2 = temp;
    }

    //����10������������ ����
    inline static int ten_power(int n)
    {
        int result = 1;

        for (int i = 0; i < n; i++)
            result *= 10;

        return result;
    }

    //��������ѣ������ڶ�����
    template <typename T>
    static void build_heap(T data[], int first, int last)
    {
        //��first��ʼ���µ���
        int parent = first;
        int child = parent * 2 + 1; //ʵ����������

        //���µݹ����
        while (child <= last)
        {
            //�Ƚ����Ӻ��Һ��ӣ���childָ��ϴ���Ǹ�����
            if (child + 1 <= last && data[child] < data[child + 1])
                child++;

            if (data[parent] > data[child]) //���ڵ���������ӽڵ㣬�������µ���
                return;
            else //���򽻻����ڵ���ϴ��ӽڵ㣬Ȼ�����µݹ����
            {
                swap(data[parent], data[child]);
                parent = child;
                child = child * 2 + 1;
            }
        }
    }

public:
    //ð������
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

    //ѡ������
    template <typename T>
    static void selection_sort(T data[], int length)
    {
        for (int i = 0; i < length; i++) {
            //������С��Ԫ��
            int min_index = i;
            for (int j = i; j < length; j++) {
                if (data[j] < data[min_index]) {
                    min_index = j;
                }
            }

            //�������ָ��λ��
            swap(data[i], data[min_index]);
        }
    }

    //�򵥲�������
    template <typename T>
    static void insertion_sort(T data[], int length)
    {
        for (int i = 1; i < length; i++)
        {
            //�����Ϊ�����֣�[0, i-1]Ϊ��������[i, length-1]Ϊ��������data[i]Ϊ������Ԫ��

            //1. ˳�����data[i]�Ĳ���λ��
            int insert_index;
            for (insert_index = 0; insert_index < i; insert_index++)
            {
                if (data[insert_index] < data[i])
                    continue;
                else
                    break;
            }

            //2. �ݴ�data[i]
            T temp = data[i];

            //3. ������λ��֮���Ԫ�غ���һ��
            for (int j = i; j > insert_index; j--)
                data[j] = data[j - 1];

            //4. ����data[i]
            data[insert_index] = temp;
        }
    }

    //�۰��������
    template <typename T>
    static void binary_search_insertion_sort(T data[], int length)
    {
        for (int index = 1; index < length; index++)
        {
            //�����Ϊ�����֣�[0, index-1]Ϊ��������[index, length-1]Ϊ��������data[index]Ϊ������Ԫ��

            //�۰���ҵ����䷶Χ[left, right]
            int left = 0, right = index - 1;
            int insert_index = 0;

            //1. �۰����
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

            //2. �ݴ�data[index]
            T temp = data[index];

            //3. ������λ��֮���Ԫ�غ���һ��
            for (int j = index; j > insert_index; j--)
                data[j] = data[j - 1];

            //4. ����data[index]
            data[insert_index] = temp;
        }
    }

    //shell����
    template <typename T>
    static void shell_sort(T data[], int length)
    {
        //��ʼ����Ϊ���鳤�ȵ�һ�룬�˺�ÿ�μ��룬ֱ����Ϊ1
        for (int increment = length / 2; increment > 0; increment /= 2)
        {
            //����������Ԫ�ط��飬����ʹ���۰��������
            for (int group = 0; group < increment; group++)
            {
                //groupΪ��ţ���������ʼԪ�صĵ�ַƫ�ƣ�indexΪ���ڵ�ַ
                //���ڵ�ַӳ�������ַ��data[group + increment * index]
                for (int index = 1; group + increment * index < length; index++)
                {
                    //�۰���ҵ����䷶Χ
                    int left = 0, right = index - 1;
                    int insert_index = 0;

                    //1. �۰����
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

                    //2. �ݴ�data[group + increment * index]
                    T temp = data[group + increment * index];

                    //3. ������λ��֮���Ԫ�غ���һ��
                    for (int j = index; j > insert_index; j--)
                        data[group + increment * j] = data[group + increment * j - increment];

                    //4. ����data[group + increment * index]
                    data[group + increment * insert_index] = temp;
                }
            }
        }
    }

    //������
    template <typename T>
    static void heap_sort(T data[], int length)
    {
        //������ʼ�ѣ������һ����Ҷ�ӽڵ�����ǰ���ϵ���
        for (int i = length / 2 - 1; i >= 0; i--)
            build_heap(data, i, length - 1);

        //���Ѷ�Ԫ�����ĩβԪ�ؽ�������������
        for (int i = length - 1; i > 0; i--)
        {
            swap(data[0], data[i]);
            build_heap(data, 0, i - 1);
        }
    }

    //��·�鲢����
    template <typename T>
    static void merge_sort(T data[], int length)
    {
        //������С����
        if (length <= 1)
            return;
        else if (length == 2)
        {
            if (data[0] > data[1])
                swap(data[0], data[1]);
            return;
        }
        else if (length <= MERGE_SORT_SHORTEST_SEGMENT_LENGTH) //�γ���Сʱʹ���۰������������������
        {
            binary_search_insertion_sort(data, length);
            return;
        }

        //���ֶν�
        int mid = length / 2, first = 0, last = length - 1;
        int a_first = first, a_last = (mid > first) ? mid : first;
        int b_first = (mid >= last) ? last : (mid + 1), b_last = last;
        int a_length = a_last - a_first + 1, b_length = b_last - b_first + 1;

        //����
        merge_sort(&data[a_first], a_length);
        merge_sort(&data[b_first], b_length);

        //����Ϊ�鲢
        int a_index = a_first, b_index = b_first;
        std::vector<T> temp;

        //��ʱa,b���������򣬽�a,b����Ԫ�ؽ�С�߹鲢��temp��ֱ������һ��鲢���
        while (a_index <= a_last && b_index <= b_last)
        {
            if (data[a_index] < data[b_index])
                temp.push_back(data[a_index++]);
            else
                temp.push_back(data[b_index++]);
        }

        //δ�鲢�����һ���ʣ��Ԫ��ֱ�Ӳ���
        while (a_index <= a_last)
            temp.push_back(data[a_index++]);
        while (b_index <= b_last)
            temp.push_back(data[b_index++]);

        //���鲢�õĶθ��ƻ�ԭ����λ��
        for (size_t i = 0; i < temp.size(); i++)
            data[i] = temp[i];
    }

    //��������
    template <typename T>
    static void quick_sort(T data[], int length, int recursion_depth = 0)
    {
        if (length <= 1)
            return;
        else if (length <= QUICK_SORT_SHORTEST_SEGMENT_LENGTH) //�γ���Сʱʹ���۰������������������
        {
            binary_search_insertion_sort(data, length);
            return;
        }

        //�������ݹ����ʱ���ö������Ա������ܶ�
        if (recursion_depth >= QUICK_SORT_MAXIMUM_RECURSION_DEPTH)
        {
            heap_sort(data, length);
            return;
        }

        //ѡ������Ԫ��
        T pivot = data[0];
        int left = 0, right = length - 1;

        //һ�������ȷ�����������λ��
        while (left < right)
        {
            //����ʱleftָ�����ᣩ��������ɨ�裬�ҵ���һ��С�������Ԫ�أ������ύ��
            while (left < right && data[right] >= pivot)
                right--;
            swap(data[left], data[right]);

            //����ʱrightָ�����ᣩ��������ɨ�裬�ҵ���һ�����������Ԫ�أ������ύ��
            while (left < right && data[left] <= pivot)
                left++;
            swap(data[left], data[right]);
        }

        //����ʱleft��right��ָ�����ᣩ������Ϊ���ģ����ֶν�
        int mid = left, first = 0, last = length - 1;
        int a_first = first, a_last = (mid > first) ? mid : first;
        int b_first = (mid >= last) ? last : (mid + 1), b_last = last;
        int a_length = a_last - a_first + 1, b_length = b_last - b_first + 1;

        //����
        quick_sort(&data[a_first], a_length, recursion_depth + 1);
        quick_sort(&data[b_first], b_length, recursion_depth + 1);
    }

    //�������򣬽��������������ݵ�����
    template <typename T>
    static void counting_sort(T data[], int length)
    {
        //����ȷ�����������ֵ��
        T data_min = data[0], data_max = data[0];
        for (int i = 0; i < length; i++)
        {
            if (data[i] < data_min)
                data_min = data[i];
            if (data[i] > data_max)
                data_max = data[i];
        }

        //����������
        std::vector<T> counter(data_max - data_min + 1, 0);

        //ͳ��
        for (int i = 0; i < length; i++)
            counter[data[i]]++;

        //�����������
        int counter_index = 0;
        for (int i = 0; i < length; i++)
        {
            while (counter[counter_index] == 0)
                counter_index++;

            data[i] = data_min + counter_index;
            counter[counter_index]--;
        }
    }

    //Ͱ����
    template <typename T>
    static void bucket_sort(T data[], int length)
    {
        //��������Ԫ��������ȷ��Ͱ������
        int num_of_buckets = length / BUCKET_SORT_DEFAULT_NUM_OF_ELEMENTS_IN_BUCKETS; 
        if (num_of_buckets == 0)
            num_of_buckets = 1;

        //����ȷ�����������ֵ��
        T data_min = data[0], data_max = data[0];
        for (int i = 0; i < length; i++)
        {
            if (data[i] < data_min)
                data_min = data[i];
            if (data[i] > data_max)
                data_max = data[i];
        }

        //ȷ��Ͱ��ֵ����
        int range_of_bucket = (int)(data_max - data_min + 1) / num_of_buckets;

        std::map<T, std::vector<T>> buckets;

        //��Ԫ��װ���Ӧ��Ͱ������data[i] / range_of_bucket��ʽӳ�䣬ʹ��Ͱ������Ͱ������
        for (int i = 0; i < length; i++)
            buckets[data[i] / range_of_bucket].push_back(data[i]);

        //��Ͱ��Ԫ��ʹ���۰��������
        for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
            binary_search_insertion_sort(map_iter->second.data(), map_iter->second.size());

        //�����������
        int index = 0;
        for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
            for (typename std::vector<T>::iterator vec_iter = map_iter->second.begin(); vec_iter != map_iter->second.end(); vec_iter++)
                data[index++] = *vec_iter;
    }

    //�������򣬽��������������ݵ�����
    template <typename T>
    static void radix_sort(T data[], int length)
    {
        //ȷ�����Ԫ��
        T data_max = data[0];
        for (int i = 0; i < length; i++)
            if (data[i] > data_max)
                data_max = data[i];

        //�������Ԫ�ص�ʮ����λ���������������
        int trip = 0;
        while (data_max)
        {
            trip++;
            data_max /= 10;
        }

        std::map<T, typename std::vector<T>> buckets;

        //�Դӵ͵��ߵĵ�bitsλΪ��������
        for (int bits = 1; bits <= trip; bits++)
        {
            //����
            for (int i = 0; i < length; i++)
                buckets[(data[i] % ten_power(bits)) / ten_power(bits - 1)].push_back(data[i]);

            //�ռ�
            int index = 0;
            for (typename std::map<T, typename std::vector<T>>::iterator map_iter = buckets.begin(); map_iter != buckets.end(); map_iter++)
                for (typename std::vector<T>::iterator vec_iter = map_iter->second.begin(); vec_iter != map_iter->second.end(); vec_iter++)
                    data[index++] = *vec_iter;
            
            buckets.clear();
        }
    }
};

#endif