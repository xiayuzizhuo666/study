//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int num;
//    cin >> num; // 从标准输入读取数字
//
//    vector<int> digits; // 用于存储拆分后的数字
//
//    // 拆分数字
//    while (num > 0) {
//        digits.push_back(num % 10); // 取得最后一位数字
//        num /= 10; // 去掉最后一位数字
//    }
//
//    // 由于数字是从最后一位开始存储的，需要反转输出
//    for (int i = digits.size() - 1; i >= 0; --i) {
//        cout << digits[i]; // 输出每一位数字
//        if (i > 0) {
//            cout << "\n"; // 在每两个数字之间输出空格
//        }
//    }
//    cout << endl; // 输出换行
//
//    return 0;
//}




//#include <iostream>
//using namespace std;
//// 递归函数splitNum：顺序输出n的各位数字，每个数字占一行
//// 返回值：无
//void splitNum(int n) {
//    // 基本情况：如果 num 小于 10，直接输出该数字
//    if (n < 10) {
//        cout << n << endl;
//        return;
//    }
//    else
//        splitNum(n / 10);
//
//    cout << n % 10 << endl;
//
//}
//int main()
//{
//    unsigned n;
//    // 输入正整数n
//    cin >> n;
//    // 调用splitNum函数，顺序输出n的各位数字
//    splitNum(n);
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int N;
//    cin >> N; // 读取测试实例的个数
//
//    // 最大楼梯级数
//    const int MAX_M = 40;
//    vector<int> dp(MAX_M + 1, 0);
//
//    // 初始化边界条件
//    dp[1] = 0; // 到达第1级的走法数
//    dp[2] = 1; // 到达第2级的走法数
//    dp[3] = 2; // 到达第3级的走法数
//
//    // 填充 dp 数组
//    for (int i = 4; i <= MAX_M; ++i) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    // 处理每个测试实例
//    for (int i = 0; i < N; ++i) {
//        int M;
//        cin >> M; // 读取每个实例的楼梯级数
//        cout << dp[M] << endl; // 输出走法数量
//    }
//
//    return 0;
//}



#include <iostream>

using namespace std;
// 函数funP：实现数学函数P函数
// 返回值：返回P(n,x)的值
double funP(int n, double x)
{
    // 请在这里补充代码，实现递归函数funP
    /********** Begin *********/
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n > 1)
        return ((2 * n - 1) * funP(n - 1, x) - (n - 1) * funP(n - 2, x)) / n;



    /********** End **********/
}
int main()
{
    int n;
    double x;
    // 输入n、x
    cin >> n >> x;
    // 输出P(n,x)
    cout << "P(" << n << ", " << x << ")=" << funP(n, x) << endl;
    return 0;
}




//#include<iostream>
//#include<fstream>
//using namespace std;
////编写函数float fun()，输入float型数据，输出float型函数值。
///*********Program*********/
//float fun( float x)
//{
//
//    if (x < 10)
//        x = x;
//    if (10 <= x && x <= 20)
//        x = -x;
//    if (x > 20)
//        x = x * 3;
//    return x;
//
//}
//void  main()
//{
//    float x ,e;
//    cin >>  x;
//    e = fun(x);
//    cout << e << endl;
//
//    return ;
//}


//改进


//#include<iostream>
//#include<fstream>
//using namespace std;
//
//
//float fun(float x) {
//    if (x < 10) {
//        return x; // x < 10 时返回 x
//    }
//    else if (x >= 10 && x <= 20) {
//        return -x; // 10 <= x <= 20 时返回 -x
//    }
//    else {
//        return x * 3; // x > 20 时返回 x * 3
//    }
//}
//
//int main() {
//    float x; 
//    cin >> x; 
//    float e = fun(x); 
//    cout << e << endl; 
//    return 0;
//}
