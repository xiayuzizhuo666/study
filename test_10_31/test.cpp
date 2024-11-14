#include <iostream>
#include <vector>
using namespace std;
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size(); 
//        int left = 0, right = n - 1; 
//        int answer = n; // 默认插入位置为数组末尾
//
//        // 使用二分查找法
//        while (left <= right) {
//            // 计算中间位置
//            int mid = ((right - left) >> 1) + left;
//            // 如果目标值小于等于中间值
//            if (target <= nums[mid]) {
//                answer = mid; // 更新插入位置为中间位置
//                right = mid - 1; // 在左半部分继续搜索
//            }
//            else {
//                left = mid + 1; // 在右半部分继续搜索
//            }
//        }
//        return answer; 
//    }
//};


class Solution {
public:
    // 查找目标值的起始和结束位置
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0; // 初始化左指针
        int right = nums.size() - 1; // 初始化右指针

        // 进行二分查找以  定位目标值
        while (left <= right) {
            int middle = left + (right - left) / 2; // 计算中间位置
            if (nums[middle] > target) {
                right = middle - 1; // 如果中间值大于目标值，调整右指针
            }
            else if (nums[middle] < target) {
                left = middle + 1; // 如果中间值小于目标值，调整左指针
            }
            else {
                vector<int> result; // 找到目标值，准备返回结果
                // 找到目标值的左边界
                result.push_back(findLeft(nums, target, middle));
                // 找到目标值的右边界
                result.push_back(findRight(nums, target, middle));
                return result; 
            }
        }
        return { -1, -1 }; // 如果没有找到目标值，返回 {-1, -1}
    }

    // 查找目标值的  左边界
    int findLeft(vector<int>& nums, int target, int right) {
        int left = 0; // 初始化左指针
        // 继续进行二分查找，直到找到左边界
        while (left <= right) {
            int middle = left + (right - left) / 2; // 计算中间位置
            if (nums[middle] < target) {
                left = middle + 1; // 如果中间值小于目标值，调整左指针
            }
            else {
                right = middle - 1; // 如果中间值大于或等于目标值，调整右指针
            }
        }
        return left;
    }

    // 查找目标值的  右边界
    int findRight(vector<int>& nums, int target, int left) {
        int right = nums.size() - 1; // 初始化右指针
        // 继续进行二分查找，直到找到右边界
        while (left <= right) {
            int middle = left + (right - left) / 2; // 计算中间位置
            if (nums[middle] > target) {
                right = middle - 1; // 如果中间值大于目标值，调整右指针
            }
            else {
                left = middle + 1; // 如果中间值小于或等于目标值，调整左指针
            }
        }
        return right;
    }
};
