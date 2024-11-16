#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	// 查找目标值在数组中的索引
	int search(vector<int>& nums, int target)
	{
		// 初始化左右指针
		int left = 0, right = nums.size() - 1;

		// 当左指针小于等于右指针时进行循环
		while (left <= right)
		{
			// 计算中间位置
			int mid = (right - left) / 2 + left;
			int num = nums[mid]; // 获取中间值

			// 如果中间值等于目标值，返回中间索引
			if (num == target)
			{
				return mid;
			}
			// 如果中间值大于目标值，调整右指针
			else if (num > target)
			{
				right = mid - 1;
			}
			// 如果中间值小于目标值，调整左指针
			else
			{
				left = mid + 1;
			}
		}
		// 如果未找到目标值，返回 -1
		return -1;
	}
};

class Solution {
public:
	// 查找目标值的插入位置
	int searchInsert(vector<int>& nums, int target) {
		// 遍历数组中的每个元素
		for (int i = 0; i < nums.size(); i++) {
			// 如果当前元素大于或等于目标值，返回当前索引
			if (nums[i] >= target) {
				return i;
			}
		}
		// 如果所有元素都小于目标值，返回数组的大小作为插入位置
		return nums.size();
	}
};


class Solution {
public:
	// 查找目标值的插入位置
	int searchInsert(vector<int>& nums, int target) {
		// 初始化左指针和右指针
		int left = 0, right = nums.size() - 1;

		// 当左指针小于等于右指针时循环
		while (left <= right) {
			// 计算中间位置，避免溢出
			int mid = left + (right - left) / 2;

			// 如果中间值小于目标值，调整左指针
			if (nums[mid] < target) {
				left = mid + 1;
			}
			// 如果中间值大于或等于目标值，调整右指针
			else {
				right = mid - 1;
			}
		}
		// 返回左指针作为目标值的插入位置
		return left;
	}
};




class Solution {
public:
	// 查找目标值的第一个位置
	int find_first(vector<int>& nums, int target)
	{
		int len = nums.size(); // 获取数组长度
		if (len < 1) return -1; // 如果数组为空，返回 -1
		if (len == 1) { // 如果数组只有一个元素
			if (nums[0] == target) return 0; // 如果该元素是目标值，返回索引 0
			else return -1; // 否则返回 -1
		}

		int start = 0; // 左指针
		int end = len - 1; // 右指针
		int idx = -1; // 用于存储找到的目标值索引
		while (start <= end) { // 当左指针小于等于右指针时循环
			int m = start + (end - start) / 2; // 计算中间位置
			if (nums[m] < target) {
				start = m + 1; // 如果中间值小于目标值，调整左指针
			}
			else {
				if (nums[m] == target) { // 如果找到目标值
					idx = m; // 更新索引
					if (m == 0) return m; // 如果是第一个元素，直接返回
					if (nums[m - 1] != target) return m; // 如果前一元素不是目标值，返回当前索引
				}
				end = m - 1; // 否则调整右指针
			}
		}

		return idx; // 返回找到的目标值索引
	}

	// 查找目标值的最后一个位置
	int find_last(vector<int>& nums, int target)
	{
		int len = nums.size(); // 获取数组长度
		if (len < 1) return -1; // 如果数组为空，返回 -1
		if (len == 1) { // 如果数组只有一个元素
			if (nums[0] == target) return 0; // 如果该元素是目标值，返回索引 0
			else return -1; // 否则返回 -1
		}

		int start = 0; // 左指针
		int end = len - 1; // 右指针
		int idx = -1; // 用于存储找到的目标值索引
		while (start <= end) { // 当左指针小于等于右指针时循环
			int m = start + (end - start) / 2; // 计算中间位置
			if (nums[m] > target) {
				end = m - 1; // 如果中间值大于目标值，调整右指针
			}
			else {
				if (nums[m] == target) { // 如果找到目标值
					idx = m; // 更新索引
					if (m == len - 1) return m; // 如果是最后一个元素，直接返回
					if (nums[m + 1] != target) return m; // 如果后一元素不是目标值，返回当前索引
				}
				start = m + 1; // 否则调整左指针
			}
		}

		return idx; // 返回找到的目标值索引
	}

	// 查找目标值的范围
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> res(2, -1); // 初始化结果数组为 [-1, -1]
		int len = nums.size(); // 获取数组长度
		if (len < 1) return res; // 如果数组为空，返回结果数组

		// 找到目标值的第一个位置和最后一个位置
		int a = find_first(nums, target);
		int b = find_last(nums, target);
		res[0] = a; // 将第一个位置存入结果数组
		res[1] = b; // 将最后一个位置存入结果数组
		return res; // 返回结果数组
	}
};



class Solution {
public:
	// 查找目标值的起始和结束位置
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = 0; // 初始化左指针
		int right = nums.size() - 1; // 初始化右指针

		// 进行二分查找以定位目标值
		while (left <= right) {
			int middle = left + (right - left) / 2; // 计算中间位置
			if (nums[middle] > target) {
				right = middle - 1; // 如果中间值大于目标值，调整右指针
			}
			else if (nums[middle] < target) {
				left = middle + 1; // 如果中间值小于目标值，调整左指针
			}
			else {
				// 找到目标值后，查找其左边界和右边界
				vector<int> result; // 创建结果数组
				result.push_back(findLeft(nums, target, middle)); // 查找左边界
				result.push_back(findRight(nums, target, middle)); // 查找右边界
				return result; // 返回结果
			}
		}
		return { -1, -1 }; // 如果没有找到目标值，返回 {-1, -1}
	}

	// 查找目标值的左边界
	int findLeft(vector<int>& nums, int target, int right) {
		int left = 0; // 初始化左指针
		// 使用二分查找来找到左边界
		while (left <= right) {
			int middle = left + (right - left) / 2; // 计算中间位置
			if (nums[middle] < target) {
				left = middle + 1; // 如果中间值小于目标值，调整左指针
			}
			else {
				right = middle - 1; // 否则调整右指针
			}
		}
		return left; // 返回左边界的位置
	}

	// 查找目标值的右边界
	int findRight(vector<int>& nums, int target, int left) {
		int right = nums.size() - 1; // 初始化右指针
		// 使用二分查找来找到右边界
		while (left <= right) {
			int middle = left + (right - left) / 2; // 计算中间位置
			if (nums[middle] > target) {
				right = middle - 1; // 如果中间值大于目标值，调整右指针
			}
			else {
				left = middle + 1; // 否则调整左指针
			}
		}
		return right; // 返回右边界的位置
	}
};
