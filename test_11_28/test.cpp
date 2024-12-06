//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0, c = 0, jishu = 0,sum = 0;
//	for (int i = 0; i <12 ; i++)
//	{
//
//		cin >> b;//每月花费
//		a += 300;//每月初300元
//		c = a - b;//剩余
//		if (c < 0)//如果小于0，代表不够，一个月省吃俭用
//		{
//			jishu++;
//			break;
//		}
//		if (c > 100||c%100==0)//如果整百或者大于100，存钱
//		{
//			int cun = c / 100;
//			sum += cun * 100;
//            c -+ cun *100;
//		}
//
//	}
//	if (jishu == 0)
//	{
//		cout << sum * 1.2 << endl;
//	}
//	else
//	{
//		cout << c << endl;
//	}
//
//	return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int monthlyBudget[12]; // 存储每个月的预算
//    int totalSavings = 0; // 储蓄总额
//    int currentBalance = 0; // 当前余额
//    int monthWithInsufficientFunds = -1; // 记录出现资金不足的月份
//
//    // 输入12个月的预算
//    for (int i = 0; i < 12; i++)
//    {
//        cin >> monthlyBudget[i];
//    }
//
//    // 处理每个月的预算
//    for (int month = 0; month < 12; month++)
//    {
//        currentBalance += 300; // 每月初收300元
//        int budget = monthlyBudget[month]; // 本月预算
//        int remaining = currentBalance - budget; // 预算后剩余
//
//        if (remaining < 0) // 如果剩余不足
//        {
//            monthWithInsufficientFunds = month + 1; // 记录失败的月份（1月-12月）
//            break; // 终止循环
//        }
//
//        // 检查是否存款
//        if (remaining >= 100 || remaining % 100 == 0)
//        {
//            int saveAmount = (remaining / 100) * 100; // 存入整百
//            totalSavings += saveAmount; // 更新储蓄
//            currentBalance -= saveAmount; // 更新当前余额
//        }
//    }
//
//    // 输出结果
//    if (monthWithInsufficientFunds != -1)
//    {
//        cout << -monthWithInsufficientFunds << endl; // 输出失败的月份
//    }
//    else
//    {
//        totalSavings = static_cast<int>(totalSavings * 1.2); // 计算年末20%利息
//        cout << (currentBalance + totalSavings) << endl; // 输出年末总金额
//    }
//
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int currentBalance = 0; // 津津手里的钱
//    int monthlyBudget;       // 每个月的花销
//    int savingsCount = 0;   // 存在妈妈那里的100元张数
//    bool isInDebt = false;  // 标记是否透支
//    int overdraftMonth = 0; // 记录透支的月份
//
//    // 处理每个月的预算
//    for (int month = 1; month <= 12; month++) {
//        currentBalance += 300; // 每个月初获得300元
//        cin >> monthlyBudget;   // 输入每个月的花销
//
//        currentBalance -= monthlyBudget; // 扣除花销
//
//        // 检查是否透支
//        if (currentBalance < 0) {
//            isInDebt = true;
//            overdraftMonth = month; // 记录透支的月份
//            break; // 透支则终止循环
//        }
//
//        // 计算存入妈妈的100元张数
//        savingsCount += currentBalance / 100; // 存入整百
//        currentBalance %= 100;                 // 更新余额
//    }
//
//    // 输出结果
//    if (!isInDebt) {
//        // 如果没有透支，计算年末资金
//        int totalAmount = currentBalance + (savingsCount * 120); // 剩余的钱 + 20%利息
//        cout << totalAmount;
//    }
//    else {
//        // 如果透支，输出透支月份的负值
//        cout << -overdraftMonth;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    bool found = false; // 用于判断是否找到符合条件的数

    for (int i = 10000; i <= 30000; i++) {
        // 提取每一位数字
        int d1 = i / 10000;          // 第一位
        int d2 = (i / 1000) % 10;    // 第二位
        int d3 = (i / 100) % 10;     // 第三位
        int d4 = (i / 10) % 10;      // 第四位
        int d5 = i % 10;             // 第五位

        // 检查条件
        if ((d1 * 100 + d2 * 10 + d3) % k == 0 &&  // 判断1到3位
            (d2 * 100 + d3 * 10 + d4) % k == 0 &&  // 判断2到4位
            (d3 * 100 + d4 * 10 + d5) % k == 0) {  // 判断2到5位
            cout << i << endl;
            found = true; // 标记已找到符合条件的数
        }
    }

    if (!found) {
        cout << "No" << endl; // 没有符合条件的数
    }

    return 0;
}

#include<iostream>
using namespace std;
bool flag = false;
int main()
{
    int k = 0;
    cin >> k;
    for (int i = 10000; i <= 30000; i++)
    {
        if (i / 100 % k == 0)//1到3位
            if ((i / 10 - i / 10000 * 1000) % k == 0)//2到4位
                if ((i - i / 1000 * 1000) % k == 0) cout << i << endl, flag = 1;//2到5位
    }
    if (!flag)
    {
        cout << "No" << endl;
    }
    return 0;
}