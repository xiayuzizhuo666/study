//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // ������������飬n-���۶������a-���۶�
//    int n, a[30], i;
//
//    // �������۶�������n <= 30
//    cin >> n;
//
//    // ����n�����۶�ֱ����a[0]��a[n-1]
//    for (i = 0; i < n; i++)
//        cin >> a[i];
//    // ���ڴ���Ӵ��룬���㲢������۶�Ĳ������
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
//// ����silly��������ֵ�ж��
//// ������a-�洢��ֵ���ַ����飬��'\0'���������Բ���Ҫ��һ���������ߺ��������ж೤
//// ����ֵ����ֵ�����ĳ̶�
//double silly(char a[]);
//
//int main()
//{
//    char s[102];     // ����洢��ֵ������
//    cin >> s;     // ���벻����λ������
//    double sy = silly(s);     // ���㷸���ĳ̶�
//    cout << sy << endl;     // ��������ĳ̶�
//    return 0;
//}
//
//double silly(char a[])
//{
//    // ���ڴ���Ӵ��룬ʵ�ֺ���silly
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



//// ���ڴ���Ӵ��룬д���upvote.cpp�ļ�
///********** Begin *********/
//
//#include <iostream>
//using namespace std;
//int main() {
//    int arr[1000] = { 0 };//��ʼ��
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
//            cin >> b;//����
//            arr[b - 1]++;
//        }
//    }
//    int max = 0, index = 0;
//    for (int i = 999; i >= 0; i--)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];//������ֵ
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
//                flag++;//��¼���ִ���
//            }
//        }
//        if (flag == 1)
//        {
//            sum++;//ֻ����һ�ε���
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
//    //���ڴ���Ӵ��룬�������֣����㲢�����ά�������Ͻ�Ԫ��֮�ͣ�
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