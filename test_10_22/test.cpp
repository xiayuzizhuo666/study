//#include <iostream>
//using namespace std;
////输入15个数计算平均值
//int main()
//{
//	int i = 0;
//	double Sum = 0;
//	double d;
//	cout << "请输入数据:(数据之间用空格分隔) " << endl;
//	while (i < 15)
//	{
//		cin >> d;
//		Sum += d;
//		i++;
//	}
//	double Average = Sum / i;
//	cout << "\n其平均值为：" << Average << endl;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int x = 10;
//	while (x>=1)
//
//	{
//		cout << x;
//		x--;
//	}
//	return 0;
//}
//int main()
//{
//    int i = 3;
//    while (i-- > 0)
//    {
//        cout << '1';
//        if (i % 2 == 0)
//            cout << '2';
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//
//int main()//本任务计算1到100之间的奇数的和 sum = 1+3+5+…+99。
//{
//	/********* Begin **********/
//	int i = 1, sum = 0;
//	while (i <= 99)
//	{
//		sum += i;
//		i = i + 2;
//	}
//	/********** End **********/
//	cout << "sum = " << sum << endl;
//	return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int score, count = 0, sum = 0, maxScore = 0;

    // Begin
    while (true) {
        cout << "请输入第" << count + 1 << "个得分[0,100]：";
        cin >> score;

        if (score == -1) {
            break; // 输入-1时结束
        }

        // 检查输入有效性
        if (score < 0 || score > 100) {
            cout << "得分必须在0到100之间，请重新输入。" << endl;
            continue; // 继续下一次循环
        }

        sum += score; // 累加得分
        count++; // 记录有效得分的数量

        if (score > maxScore) {
            maxScore = score; // 更新最高分
        }
    }
    // End

    // 输出结果
    if (count > 0) {
        double average = static_cast<double>(sum) / count; // 计算平均分
        //static_cast是用于类型转换的运算符之一，它主要用于基本数据类型之间的转换，如整型和浮点型之间的转换，或在类层次结构中进行上行转换
        cout << "最高分：" << maxScore << endl;
        cout << "平均分：" << average << endl;
    }
    else {
        cout << "最高分：0" << endl;
        cout << "平均分：0" << endl;
    }

    return 0;
}
