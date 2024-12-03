//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//int main() {
//    vector<int> unhappy_days(7, 0); // 记录每一天的不高兴程度
//    int max_unhappiness = 0; // 最大不高兴程度
//    int max_day = -1; // 离散的最不高兴的一天索引
//
//    for (int i = 0; i < 7; i++) {
//        int school_hours, additional_hours;
//        cin >> school_hours >> additional_hours; // 读取每一天的上课时间
//
//        int total_hours = school_hours + additional_hours; // 计算总时间
//        if (total_hours > 8) {
//            int unhappiness = total_hours - 8; // 计算不高兴的程度
//            unhappy_days[i] = unhappiness; // 保存不高兴程度
//
//            // 更新最大不高兴程度和对应的日子
//            if (unhappiness > max_unhappiness) {
//                max_unhappiness = unhappiness;
//                max_day = i + 1; // 1-indexed
//            }
//        }
//    }
//
//    // 输出结果
//    if (max_day == -1) {
//        cout << 0 << endl; // 所有天都不不高兴
//    }
//    else {
//        cout << max_day << endl; // 输出最不高兴的那一天
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
//        cin >> arr1[i];//给小鱼的可爱值赋值
//    for (int i = 1; i <= n; i++)
//        for (int j = i; j >= 1; j--)//与前面的小鱼比较
//        {
//            if (arr1[j] < arr1[i])
//                arr2[i]++;//如果前面小鱼小于这只小鱼，数量++
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

