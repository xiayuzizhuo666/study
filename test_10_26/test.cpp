#include <iostream>
#include <cstddef>
#include <vector>
using namespace std;
int main()
{
	//constexpr size_t sz = 5;
	//int arr[sz] = { 1,2,3,4,5 };
	//int* ip = arr;
	//int* ip2 = ip + 4;

	//auto n = end(arr) - begin(arr);
	//
	//int* b = arr, * e = arr + sz;
	//while (b < e)
	//{
	//	//ʹ�� *b
	//	++b;
	//}

	//int ia[] = { 0,2,4,6,8 };
	//int last = *(ia + 4);
	//int i = ia[2];//ia[2]�õ����ǣ�ia+2������ָ��Ԫ��
	//int* p = ia;//pָ��ia����Ԫ��
	//int* p = ia;//ָ����Ԫ��
	//i = *(p + 2);//�ȼ���i = ia[2]

	int int_arr[] = { 0,1,2,3,4,5 };

	vector<int> ivec(begin(int_arr), end(int_arr));
	vector<int> aubVec(int_arr + 1, int_arr + 4);

	return 0;
}