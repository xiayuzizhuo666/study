#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
//int main()//1
//{
//	cout << 36 * 30 / 10 << endl;
//	return 0;
//}
//int main()
//{
//	double a = 2;
//	int b = pow(a, 2023);
//	double c = b % 1000;
//	cout << b <<endl
//		<< c<<endl;
//	return 0;
//}


//int main()
//{
//int res = 1;
//for (int i = 0; i < 2023; i++)
//{
//	res = (res * 2) % 1000;
//}
//	cout << res << endl;
//	return 0;
//}






//#include <cmath> 
//#include <vector>
//class Solution {
//public:
//    int fib(int n) {
//        // 计算平方根
//        double sqrt5 = sqrt(5);
//
//        // 根据公式计算第n个斐波那契数
//        double fibN = pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n);
//
//        // 将计算结果四舍五入得到第n个斐波那契数
//        return round(fibN / sqrt5);
//    }
//};
//
//
//class Solution {
//public:
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        int n = A.size();//获取A的个数
//        move(n, A, B, C);//进入move函数
//    }
//
//    void move(int n, vector<int>& A, vector<int>& B, vector<int>& C) {
//        if (n == 1) {
//            C.push_back(A.back()); // 将A最后一个移到C
//            A.pop_back();//移除最后一个数
//            return;
//        }
//        //重复操作
//        move(n - 1, A, C, B);    // 将A上面n-1个通过C移到B
//        C.push_back(A.back());  // 将A最后一个移到C
//        A.pop_back();          // A空
//        move(n - 1, B, A, C); // 将B上面n-1个通过空的A移到C
//    }
//};


//int func(int arr[], int target, int left, int right) {
//    // 检查当前查找范围是否有效
//    if (left > right) {
//        return -1; // 如果左大于右，返回 -1
//    }
//
//    // 计算中间位置
//    int mid = left + (right - left) / 2; 
//
//    // 检查中间元素是否为目标值
//    if (arr[mid] == target) {
//        return mid; // 找到目标值，返回其索引
//    }
//    // 如果中间元素大于目标值，继续在左半部分查找
//    else if (arr[mid] > target) {
//        return func(arr, target, left, mid - 1); // 调用自身在左半部分查找
//    }
//    // 如果中间元素小于目标值，继续在右半部分查找
//    else {
//        return func(arr, target, mid + 1, right); // 调用自身在右半部分查找
//    }
//}
//
//void bubbleSort(vector<int>& arr) {
//    int n = arr.size(); // 获取数组的大小
//    for (int i = 0; i < n - 1; i++) { // 外层循环控制排序的轮数
//        bool swapped = false; // 标记每轮是否有交换发生
//        for (int j = 0; j < n - 1 - i; j++) { // 内层循环控制相邻元素的比较
//            if (arr[j] > arr[j + 1]) { // 如果前一个元素大于后一个元素
//                swap(arr[j], arr[j + 1]); // 交换位置
//                swapped = true; // 记录有交换发生
//            }
//        }
//        // 如果数组已经有序，可以提前结束
//        if (!swapped) {
//            break;
//        }
//    }
//}//swap 函数，通常用于交换两个值的内容，而不需要使用临时变量。



//int func(int num, int base)
//{
//	int sum = 0;
//	while (num > 0)
//	{
//		sum += num % base;
//		num /= base;
//	}
//	return sum;
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 0; i < 1e+9; i++)
//	{
//		if (func(1, 2) == func(1, 8))
//		{
//			count++;
//			if (count == 23)
//			{
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//int func(int num)
//{
//	int count = 0;
//	for (int i = 0; i <=num; i++)
//	{
//		if (num % i == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int arr[] =
//	{ 393353, 901440, 123481, 850930, 423154, 240461,
//	373746, 232926, 396677, 486579, 744860, 468782,
//	941389, 777714, 992588, 343292, 385198, 876426,
//	483857, 241899, 544851, 647930, 772403, 109929,
//	882745, 372491, 877710, 340000, 659788, 658675,
//	296521, 491295, 609764, 718967, 842000, 670302 };
//	int result_value = 0;
//	int result_count = 0;
//	for (int i = 0; i < 36; i++)
//	{
//		int tmp_count = func(arr[i]);
//		if (tmp_count > result_count)
//		{
//			result_count = tmp_count;
//			result_value = arr[i];
//		}
//	}
//	cout << result_value << endl;
//	return 0;
//}


//int main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(1, 5) << s[0] << endl;
//}

