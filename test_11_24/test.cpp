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
//        // ����ƽ����
//        double sqrt5 = sqrt(5);
//
//        // ���ݹ�ʽ�����n��쳲�������
//        double fibN = pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n);
//
//        // ����������������õ���n��쳲�������
//        return round(fibN / sqrt5);
//    }
//};
//
//
//class Solution {
//public:
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        int n = A.size();//��ȡA�ĸ���
//        move(n, A, B, C);//����move����
//    }
//
//    void move(int n, vector<int>& A, vector<int>& B, vector<int>& C) {
//        if (n == 1) {
//            C.push_back(A.back()); // ��A���һ���Ƶ�C
//            A.pop_back();//�Ƴ����һ����
//            return;
//        }
//        //�ظ�����
//        move(n - 1, A, C, B);    // ��A����n-1��ͨ��C�Ƶ�B
//        C.push_back(A.back());  // ��A���һ���Ƶ�C
//        A.pop_back();          // A��
//        move(n - 1, B, A, C); // ��B����n-1��ͨ���յ�A�Ƶ�C
//    }
//};


//int func(int arr[], int target, int left, int right) {
//    // ��鵱ǰ���ҷ�Χ�Ƿ���Ч
//    if (left > right) {
//        return -1; // ���������ң����� -1
//    }
//
//    // �����м�λ��
//    int mid = left + (right - left) / 2; 
//
//    // ����м�Ԫ���Ƿ�ΪĿ��ֵ
//    if (arr[mid] == target) {
//        return mid; // �ҵ�Ŀ��ֵ������������
//    }
//    // ����м�Ԫ�ش���Ŀ��ֵ����������벿�ֲ���
//    else if (arr[mid] > target) {
//        return func(arr, target, left, mid - 1); // ������������벿�ֲ���
//    }
//    // ����м�Ԫ��С��Ŀ��ֵ���������Ұ벿�ֲ���
//    else {
//        return func(arr, target, mid + 1, right); // �����������Ұ벿�ֲ���
//    }
//}
//
//void bubbleSort(vector<int>& arr) {
//    int n = arr.size(); // ��ȡ����Ĵ�С
//    for (int i = 0; i < n - 1; i++) { // ���ѭ���������������
//        bool swapped = false; // ���ÿ���Ƿ��н�������
//        for (int j = 0; j < n - 1 - i; j++) { // �ڲ�ѭ����������Ԫ�صıȽ�
//            if (arr[j] > arr[j + 1]) { // ���ǰһ��Ԫ�ش��ں�һ��Ԫ��
//                swap(arr[j], arr[j + 1]); // ����λ��
//                swapped = true; // ��¼�н�������
//            }
//        }
//        // ��������Ѿ����򣬿�����ǰ����
//        if (!swapped) {
//            break;
//        }
//    }
//}//swap ������ͨ�����ڽ�������ֵ�����ݣ�������Ҫʹ����ʱ������



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

