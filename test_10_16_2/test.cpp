//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int num;
//    cin >> num; // �ӱ�׼�����ȡ����
//
//    vector<int> digits; // ���ڴ洢��ֺ������
//
//    // �������
//    while (num > 0) {
//        digits.push_back(num % 10); // ȡ�����һλ����
//        num /= 10; // ȥ�����һλ����
//    }
//
//    // ���������Ǵ����һλ��ʼ�洢�ģ���Ҫ��ת���
//    for (int i = digits.size() - 1; i >= 0; --i) {
//        cout << digits[i]; // ���ÿһλ����
//        if (i > 0) {
//            cout << "\n"; // ��ÿ��������֮������ո�
//        }
//    }
//    cout << endl; // �������
//
//    return 0;
//}




//#include <iostream>
//using namespace std;
//// �ݹ麯��splitNum��˳�����n�ĸ�λ���֣�ÿ������ռһ��
//// ����ֵ����
//void splitNum(int n) {
//    // ������������ num С�� 10��ֱ�����������
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
//    // ����������n
//    cin >> n;
//    // ����splitNum������˳�����n�ĸ�λ����
//    splitNum(n);
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int N;
//    cin >> N; // ��ȡ����ʵ���ĸ���
//
//    // ���¥�ݼ���
//    const int MAX_M = 40;
//    vector<int> dp(MAX_M + 1, 0);
//
//    // ��ʼ���߽�����
//    dp[1] = 0; // �����1�����߷���
//    dp[2] = 1; // �����2�����߷���
//    dp[3] = 2; // �����3�����߷���
//
//    // ��� dp ����
//    for (int i = 4; i <= MAX_M; ++i) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    // ����ÿ������ʵ��
//    for (int i = 0; i < N; ++i) {
//        int M;
//        cin >> M; // ��ȡÿ��ʵ����¥�ݼ���
//        cout << dp[M] << endl; // ����߷�����
//    }
//
//    return 0;
//}



#include <iostream>

using namespace std;
// ����funP��ʵ����ѧ����P����
// ����ֵ������P(n,x)��ֵ
double funP(int n, double x)
{
    // �������ﲹ����룬ʵ�ֵݹ麯��funP
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
    // ����n��x
    cin >> n >> x;
    // ���P(n,x)
    cout << "P(" << n << ", " << x << ")=" << funP(n, x) << endl;
    return 0;
}




//#include<iostream>
//#include<fstream>
//using namespace std;
////��д����float fun()������float�����ݣ����float�ͺ���ֵ��
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


//�Ľ�


//#include<iostream>
//#include<fstream>
//using namespace std;
//
//
//float fun(float x) {
//    if (x < 10) {
//        return x; // x < 10 ʱ���� x
//    }
//    else if (x >= 10 && x <= 20) {
//        return -x; // 10 <= x <= 20 ʱ���� -x
//    }
//    else {
//        return x * 3; // x > 20 ʱ���� x * 3
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
