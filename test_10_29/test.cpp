//#include <iostream>
//#include <vector>

//using namespace std;
//int search(vector<int>& nums, int target) {
//    int l = 0, r = nums.length - 1;
//    while (l <= r) {
//        int mid = (r - l) / 2 + l;
//        int num = nums[mid];
//        if (num == target) {
//            return mid;
//        }
//        else if (num > target) {
//            r = mid - 1;
//        }
//        else {
//            l = mid + 1;
//        }
//    }
//    return -1;
//}

#include <iostream> 
#include <vector>
#include <algorithm> // 引入算法库，通常用于使用一些算法

using namespace std;

// 二分查找函数，接受一个整数向量和目标值，返回目标值的索引
int search(vector<int>& nums, int target) 
{
    int  L = 0, R = nums.size() - 1; // 初始化左指针和右指针

    while (L <= R) { // 当左指针小于等于右指针时进行循环

        int mid = (R - L) / 2 + L; // 计算中间指针 mid

        int num = nums[mid]; // 获取中间位置的元素

        if (num == target) { // 如果中间元素等于目标值

            return mid; // 返回中间指针的位置
        }
        else if (num > target) { // 如果中间元素大于目标值

            R = mid - 1; // 收缩右边界，排除右半部分
        }
        else { // 如果中间元素小于目标值

            L = mid + 1; // 收缩左边界，排除左半部分
        }
    }
    return -1;  // 当目标值不存在时返回 -1
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int search(vector<int>&nums, int target)
//{
//	int left = 0, right = nums.size() - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		int num = nums[mid];
//		if (num == target)
//		{
//			return mid;
//		}
//		else if (num > target)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//		return -1;
//}