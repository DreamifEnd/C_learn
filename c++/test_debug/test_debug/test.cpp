//#include <vector>
//#include<iostream>
//using namespace std;
//
//// ������ arr �ݹ�ز�ֳ����룬ֱ��ÿ��������ֻ����һ��Ԫ��
//vector<int> merge_sort(vector<int> arr)
//{
//    if (arr.size() == 1)
//    {
//        return arr;
//    }
//    else
//    {
//        // ��� arr ������
//        vector<int> left_arr(arr.begin(), arr.begin() + arr.size() / 2);
//        vector<int> right_arr(arr.begin() + arr.size() / 2, arr.end());
//
//        // �ݹ�ض������������
//        vector<int> left_sorted = merge_sort(left_arr);
//        vector<int> right_sorted = merge_sort(right_arr);
//
//        // �ϲ������������������
//        return merge(left_sorted, right_sorted);
//    }
//}
//
//// �ϲ���������������� left �� right
//vector<int> merge(vector<int> left, vector<int> right)
//{
//    vector<int> result;
//
//    // �����������Ԫ�ذ�˳����� result ���飬ֱ��ĳһ������Ϊ��
//    while (!left.empty() && !right.empty())
//    {
//        if (left[0] <= right[0])
//        {
//            result.push_back(left[0]);
//            left.erase(left.begin());
//        }
//        else
//        {
//            result.push_back(right[0]);
//            right.erase(right.begin());
//        }
//    }
//
//    // ��ʣ�������Ԫ�ز��� result ����
//    if (!left.empty())
//    {
//        result.insert(result.end(), left.begin(), left.end());
//    }
//    else if (!right.empty())
//    {
//        result.insert(result.end(), right.begin(), right.end());
//    }
//
//    return result;
//}
//int main()
//{
//    vector<int> arr[10];
//    arr.assign();
//}
//
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << strcmp("ABC", "ABD");
}