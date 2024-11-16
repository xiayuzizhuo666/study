#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	// ����Ŀ��ֵ�������е�����
	int search(vector<int>& nums, int target)
	{
		// ��ʼ������ָ��
		int left = 0, right = nums.size() - 1;

		// ����ָ��С�ڵ�����ָ��ʱ����ѭ��
		while (left <= right)
		{
			// �����м�λ��
			int mid = (right - left) / 2 + left;
			int num = nums[mid]; // ��ȡ�м�ֵ

			// ����м�ֵ����Ŀ��ֵ�������м�����
			if (num == target)
			{
				return mid;
			}
			// ����м�ֵ����Ŀ��ֵ��������ָ��
			else if (num > target)
			{
				right = mid - 1;
			}
			// ����м�ֵС��Ŀ��ֵ��������ָ��
			else
			{
				left = mid + 1;
			}
		}
		// ���δ�ҵ�Ŀ��ֵ������ -1
		return -1;
	}
};

class Solution {
public:
	// ����Ŀ��ֵ�Ĳ���λ��
	int searchInsert(vector<int>& nums, int target) {
		// ���������е�ÿ��Ԫ��
		for (int i = 0; i < nums.size(); i++) {
			// �����ǰԪ�ش��ڻ����Ŀ��ֵ�����ص�ǰ����
			if (nums[i] >= target) {
				return i;
			}
		}
		// �������Ԫ�ض�С��Ŀ��ֵ����������Ĵ�С��Ϊ����λ��
		return nums.size();
	}
};


class Solution {
public:
	// ����Ŀ��ֵ�Ĳ���λ��
	int searchInsert(vector<int>& nums, int target) {
		// ��ʼ����ָ�����ָ��
		int left = 0, right = nums.size() - 1;

		// ����ָ��С�ڵ�����ָ��ʱѭ��
		while (left <= right) {
			// �����м�λ�ã��������
			int mid = left + (right - left) / 2;

			// ����м�ֵС��Ŀ��ֵ��������ָ��
			if (nums[mid] < target) {
				left = mid + 1;
			}
			// ����м�ֵ���ڻ����Ŀ��ֵ��������ָ��
			else {
				right = mid - 1;
			}
		}
		// ������ָ����ΪĿ��ֵ�Ĳ���λ��
		return left;
	}
};




class Solution {
public:
	// ����Ŀ��ֵ�ĵ�һ��λ��
	int find_first(vector<int>& nums, int target)
	{
		int len = nums.size(); // ��ȡ���鳤��
		if (len < 1) return -1; // �������Ϊ�գ����� -1
		if (len == 1) { // �������ֻ��һ��Ԫ��
			if (nums[0] == target) return 0; // �����Ԫ����Ŀ��ֵ���������� 0
			else return -1; // ���򷵻� -1
		}

		int start = 0; // ��ָ��
		int end = len - 1; // ��ָ��
		int idx = -1; // ���ڴ洢�ҵ���Ŀ��ֵ����
		while (start <= end) { // ����ָ��С�ڵ�����ָ��ʱѭ��
			int m = start + (end - start) / 2; // �����м�λ��
			if (nums[m] < target) {
				start = m + 1; // ����м�ֵС��Ŀ��ֵ��������ָ��
			}
			else {
				if (nums[m] == target) { // ����ҵ�Ŀ��ֵ
					idx = m; // ��������
					if (m == 0) return m; // ����ǵ�һ��Ԫ�أ�ֱ�ӷ���
					if (nums[m - 1] != target) return m; // ���ǰһԪ�ز���Ŀ��ֵ�����ص�ǰ����
				}
				end = m - 1; // ���������ָ��
			}
		}

		return idx; // �����ҵ���Ŀ��ֵ����
	}

	// ����Ŀ��ֵ�����һ��λ��
	int find_last(vector<int>& nums, int target)
	{
		int len = nums.size(); // ��ȡ���鳤��
		if (len < 1) return -1; // �������Ϊ�գ����� -1
		if (len == 1) { // �������ֻ��һ��Ԫ��
			if (nums[0] == target) return 0; // �����Ԫ����Ŀ��ֵ���������� 0
			else return -1; // ���򷵻� -1
		}

		int start = 0; // ��ָ��
		int end = len - 1; // ��ָ��
		int idx = -1; // ���ڴ洢�ҵ���Ŀ��ֵ����
		while (start <= end) { // ����ָ��С�ڵ�����ָ��ʱѭ��
			int m = start + (end - start) / 2; // �����м�λ��
			if (nums[m] > target) {
				end = m - 1; // ����м�ֵ����Ŀ��ֵ��������ָ��
			}
			else {
				if (nums[m] == target) { // ����ҵ�Ŀ��ֵ
					idx = m; // ��������
					if (m == len - 1) return m; // ��������һ��Ԫ�أ�ֱ�ӷ���
					if (nums[m + 1] != target) return m; // �����һԪ�ز���Ŀ��ֵ�����ص�ǰ����
				}
				start = m + 1; // ���������ָ��
			}
		}

		return idx; // �����ҵ���Ŀ��ֵ����
	}

	// ����Ŀ��ֵ�ķ�Χ
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> res(2, -1); // ��ʼ���������Ϊ [-1, -1]
		int len = nums.size(); // ��ȡ���鳤��
		if (len < 1) return res; // �������Ϊ�գ����ؽ������

		// �ҵ�Ŀ��ֵ�ĵ�һ��λ�ú����һ��λ��
		int a = find_first(nums, target);
		int b = find_last(nums, target);
		res[0] = a; // ����һ��λ�ô���������
		res[1] = b; // �����һ��λ�ô���������
		return res; // ���ؽ������
	}
};



class Solution {
public:
	// ����Ŀ��ֵ����ʼ�ͽ���λ��
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = 0; // ��ʼ����ָ��
		int right = nums.size() - 1; // ��ʼ����ָ��

		// ���ж��ֲ����Զ�λĿ��ֵ
		while (left <= right) {
			int middle = left + (right - left) / 2; // �����м�λ��
			if (nums[middle] > target) {
				right = middle - 1; // ����м�ֵ����Ŀ��ֵ��������ָ��
			}
			else if (nums[middle] < target) {
				left = middle + 1; // ����м�ֵС��Ŀ��ֵ��������ָ��
			}
			else {
				// �ҵ�Ŀ��ֵ�󣬲�������߽���ұ߽�
				vector<int> result; // �����������
				result.push_back(findLeft(nums, target, middle)); // ������߽�
				result.push_back(findRight(nums, target, middle)); // �����ұ߽�
				return result; // ���ؽ��
			}
		}
		return { -1, -1 }; // ���û���ҵ�Ŀ��ֵ������ {-1, -1}
	}

	// ����Ŀ��ֵ����߽�
	int findLeft(vector<int>& nums, int target, int right) {
		int left = 0; // ��ʼ����ָ��
		// ʹ�ö��ֲ������ҵ���߽�
		while (left <= right) {
			int middle = left + (right - left) / 2; // �����м�λ��
			if (nums[middle] < target) {
				left = middle + 1; // ����м�ֵС��Ŀ��ֵ��������ָ��
			}
			else {
				right = middle - 1; // ���������ָ��
			}
		}
		return left; // ������߽��λ��
	}

	// ����Ŀ��ֵ���ұ߽�
	int findRight(vector<int>& nums, int target, int left) {
		int right = nums.size() - 1; // ��ʼ����ָ��
		// ʹ�ö��ֲ������ҵ��ұ߽�
		while (left <= right) {
			int middle = left + (right - left) / 2; // �����м�λ��
			if (nums[middle] > target) {
				right = middle - 1; // ����м�ֵ����Ŀ��ֵ��������ָ��
			}
			else {
				left = middle + 1; // ���������ָ��
			}
		}
		return right; // �����ұ߽��λ��
	}
};
