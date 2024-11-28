//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // 定义变量及数组，n-销售额个数，a-销售额
//    int n, a[30], i;
//
//    // 输入销售额数量，n <= 30
//    cin >> n;
//
//    // 输入n个销售额，分别存入a[0]到a[n-1]
//    for (i = 0; i < n; i++)
//        cin >> a[i];
//    // 请在此添加代码，计算并输出销售额的波动情况
//    /********** Begin *********/
//    for (int j = 0; j < n - 1; j++) {
//        cout << a[j + 1] - a[j] << " ";
//    }
//    /********** End **********/
//
//    return 0;
//}
//
//


//#include <iostream>
//using namespace std;
//
//// 函数silly：计算数值有多二
//// 参数：a-存储数值的字符数组，以'\0'结束，所以不需要另一个参数告诉函数数组有多长
//// 返回值：数值犯二的程度
//double silly(char a[]);
//
//int main()
//{
//    char s[102];     // 定义存储数值的数组
//    cin >> s;     // 输入不超过位的整数
//    double sy = silly(s);     // 计算犯二的程度
//    cout << sy << endl;     // 输出犯二的程度
//    return 0;
//}
//
//double silly(char a[])
//{
//    // 请在此添加代码，实现函数silly
//    /********** Begin *********/
//    int i = 0, n = 0;
//    while (a[i] != '\0')
//    {
//        if (a[i] == '2')
//        {
//            n++;
//        }
//        i++;
//    }
//    if (a[0] == '-')
//        i--;
//    double x = (double)n / i;
//    int c = a[i] - '0';
//    if (c % 2 == 0)
//        x = x * 2;
//    if (a[0] == '-')
//        x = x * 1.5;
//    return x;
//
//    /********** End **********/
//}



//// 请在此添加代码，写完成upvote.cpp文件
///********** Begin *********/
//
//#include <iostream>
//using namespace std;
//int main() {
//    int arr[1000] = { 0 };//初始化
//    int n, m, b;
//    cin >> n;
//    if (n >= 1000) {
//        return 0;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> m;
//        for (int j = 0; j < m; j++)
//        {
//            cin >> b;//计数
//            arr[b - 1]++;
//        }
//    }
//    int max = 0, index = 0;
//    for (int i = 999; i >= 0; i--)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];//获得最大值
//            index = i;
//        }
//    }
//    cout << index + 1 << " " << max;
//    return 0;
//}
///********** End **********/
//
//
//
//
//#include<iostream>
//#include<fstream>
//
//int N = 10;
//
//int unique_num(int array[])
//{
//    /**********Program**********/
//    int b[100];
//    int flag;
//    int sum = 0;
//    for (int j = 0; j < N; j++)
//    {
//        b[j] = array[j];
//    }
//    for (int x = 0; x < N; x++)
//    {
//        flag = 0;
//        for (int y = 0; y < N; y++)
//        {
//            if (array[x] == b[y])
//            {
//                flag++;//记录出现次数
//            }
//        }
//        if (flag == 1)
//        {
//            sum++;//只出现一次的数
//        }
//    }
//    return sum;
//}
///**********  End  **********/
//
//
//

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int sum_right_corner(int a[4][4])
//{
//    //请在此添加代码，输入数字，计算并输出二维数组右上角元素之和；
//    /**********Program**********/
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            cin >> a[i][j];
//        }
//    }
//
//    int sum = 0;
//    for (int i = 0; i < 4; i++) {
//        for (int j = i + 1; j < 4; j++) {
//            sum += a[i][j];
//        }
//    }
//
//    return sum;
//
//    /**********  End  **********/
//}