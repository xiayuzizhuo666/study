//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//int main() {
//    vector<int> unhappy_days(7, 0); // ��¼ÿһ��Ĳ����˳̶�
//    int max_unhappiness = 0; // ��󲻸��˳̶�
//    int max_day = -1; // ��ɢ������˵�һ������
//
//    for (int i = 0; i < 7; i++) {
//        int school_hours, additional_hours;
//        cin >> school_hours >> additional_hours; // ��ȡÿһ����Ͽ�ʱ��
//
//        int total_hours = school_hours + additional_hours; // ������ʱ��
//        if (total_hours > 8) {
//            int unhappiness = total_hours - 8; // ���㲻���˵ĳ̶�
//            unhappy_days[i] = unhappiness; // ���治���˳̶�
//
//            // ������󲻸��˳̶ȺͶ�Ӧ������
//            if (unhappiness > max_unhappiness) {
//                max_unhappiness = unhappiness;
//                max_day = i + 1; // 1-indexed
//            }
//        }
//    }
//
//    // ������
//    if (max_day == -1) {
//        cout << 0 << endl; // �����춼��������
//    }
//    else {
//        cout << max_day << endl; // �������˵���һ��
//    }
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int arr1[101], arr2[101], n;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        cin >> arr1[i];//��С��Ŀɰ�ֵ��ֵ
//    for (int i = 1; i <= n; i++)
//        for (int j = i; j >= 1; j--)//��ǰ���С��Ƚ�
//        {
//            if (arr1[j] < arr1[i])
//                arr2[i]++;//���ǰ��С��С����ֻС�㣬����++
//        }
//    for (int i = 1; i <= n; i++) 
//        cout << arr2[i] <<" ";
//    return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	cout << n + (n - 1) / (k - 1);
	return 0;

}

