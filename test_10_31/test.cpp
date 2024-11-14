#include <iostream>
#include <vector>
using namespace std;
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size(); 
//        int left = 0, right = n - 1; 
//        int answer = n; // Ĭ�ϲ���λ��Ϊ����ĩβ
//
//        // ʹ�ö��ֲ��ҷ�
//        while (left <= right) {
//            // �����м�λ��
//            int mid = ((right - left) >> 1) + left;
//            // ���Ŀ��ֵС�ڵ����м�ֵ
//            if (target <= nums[mid]) {
//                answer = mid; // ���²���λ��Ϊ�м�λ��
//                right = mid - 1; // ����벿�ּ�������
//            }
//            else {
//                left = mid + 1; // ���Ұ벿�ּ�������
//            }
//        }
//        return answer; 
//    }
//};


class Solution {
public:
    // ����Ŀ��ֵ����ʼ�ͽ���λ��
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0; // ��ʼ����ָ��
        int right = nums.size() - 1; // ��ʼ����ָ��

        // ���ж��ֲ�����  ��λĿ��ֵ
        while (left <= right) {
            int middle = left + (right - left) / 2; // �����м�λ��
            if (nums[middle] > target) {
                right = middle - 1; // ����м�ֵ����Ŀ��ֵ��������ָ��
            }
            else if (nums[middle] < target) {
                left = middle + 1; // ����м�ֵС��Ŀ��ֵ��������ָ��
            }
            else {
                vector<int> result; // �ҵ�Ŀ��ֵ��׼�����ؽ��
                // �ҵ�Ŀ��ֵ����߽�
                result.push_back(findLeft(nums, target, middle));
                // �ҵ�Ŀ��ֵ���ұ߽�
                result.push_back(findRight(nums, target, middle));
                return result; 
            }
        }
        return { -1, -1 }; // ���û���ҵ�Ŀ��ֵ������ {-1, -1}
    }

    // ����Ŀ��ֵ��  ��߽�
    int findLeft(vector<int>& nums, int target, int right) {
        int left = 0; // ��ʼ����ָ��
        // �������ж��ֲ��ң�ֱ���ҵ���߽�
        while (left <= right) {
            int middle = left + (right - left) / 2; // �����м�λ��
            if (nums[middle] < target) {
                left = middle + 1; // ����м�ֵС��Ŀ��ֵ��������ָ��
            }
            else {
                right = middle - 1; // ����м�ֵ���ڻ����Ŀ��ֵ��������ָ��
            }
        }
        return left;
    }

    // ����Ŀ��ֵ��  �ұ߽�
    int findRight(vector<int>& nums, int target, int left) {
        int right = nums.size() - 1; // ��ʼ����ָ��
        // �������ж��ֲ��ң�ֱ���ҵ��ұ߽�
        while (left <= right) {
            int middle = left + (right - left) / 2; // �����м�λ��
            if (nums[middle] > target) {
                right = middle - 1; // ����м�ֵ����Ŀ��ֵ��������ָ��
            }
            else {
                left = middle + 1; // ����м�ֵС�ڻ����Ŀ��ֵ��������ָ��
            }
        }
        return right;
    }
};
