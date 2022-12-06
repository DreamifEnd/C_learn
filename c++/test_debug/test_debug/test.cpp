//#include <vector>
//#include<iostream>
//using namespace std;
//
//// 将数组 arr 递归地拆分成两半，直到每个子数组只包含一个元素
//vector<int> merge_sort(vector<int> arr)
//{
//    if (arr.size() == 1)
//    {
//        return arr;
//    }
//    else
//    {
//        // 拆分 arr 成两半
//        vector<int> left_arr(arr.begin(), arr.begin() + arr.size() / 2);
//        vector<int> right_arr(arr.begin() + arr.size() / 2, arr.end());
//
//        // 递归地对两半进行排序
//        vector<int> left_sorted = merge_sort(left_arr);
//        vector<int> right_sorted = merge_sort(right_arr);
//
//        // 合并两个已排序的子数组
//        return merge(left_sorted, right_sorted);
//    }
//}
//
//// 合并两个已排序的数组 left 和 right
//vector<int> merge(vector<int> left, vector<int> right)
//{
//    vector<int> result;
//
//    // 将两个数组的元素按顺序插入 result 数组，直到某一个数组为空
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
//    // 将剩余的数组元素插入 result 数组
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