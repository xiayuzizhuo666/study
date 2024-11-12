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
#include <algorithm> // �����㷨�⣬ͨ������ʹ��һЩ�㷨

using namespace std;

// ���ֲ��Һ���������һ������������Ŀ��ֵ������Ŀ��ֵ������
int search(vector<int>& nums, int target) 
{
    int  L = 0, R = nums.size() - 1; // ��ʼ����ָ�����ָ��

    while (L <= R) { // ����ָ��С�ڵ�����ָ��ʱ����ѭ��

        int mid = (R - L) / 2 + L; // �����м�ָ�� mid

        int num = nums[mid]; // ��ȡ�м�λ�õ�Ԫ��

        if (num == target) { // ����м�Ԫ�ص���Ŀ��ֵ

            return mid; // �����м�ָ���λ��
        }
        else if (num > target) { // ����м�Ԫ�ش���Ŀ��ֵ

            R = mid - 1; // �����ұ߽磬�ų��Ұ벿��
        }
        else { // ����м�Ԫ��С��Ŀ��ֵ

            L = mid + 1; // ������߽磬�ų���벿��
        }
    }
    return -1;  // ��Ŀ��ֵ������ʱ���� -1
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