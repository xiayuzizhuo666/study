//#include <iostream>
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	cout << "enter two numbers" << endl;
//	int v1 = 0, v2 = 0;
//	cin >> v1 >> v2;
//	cout << "the sum of" << v1 << "and" << v2
//		<< "is" << v1 + v2 << endl;
//
//	return 0;
//}
//int main()
//{
//	using std::cout;
//	cout << "hello world" << std::endl;
//
//	return 0;
//}
//int main()
//{
//	using std::cout;
//	using std::cin;
//	cout << "please enter two numbers" << std::endl;
//	int n1 = 0, n2 = 0;
//	cin >> n1;
//	cin >> n2;
//	cout << "the product of" << n1 << "times" << n2
//		<< "is" << n1 * n2 << std::endl;
//
//	return 0;
//}
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	cout << "enter two numbers" << endl;
//	int v1 = 0, v2 = 0;
//	cin >> v1 >> v2;
//	cout << "the sum of" << v1
//		<< "and" << v2
//		<< "is" << v1 + v2 << endl;
//
//	return 0;
//}
/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='


     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
//int main()
//{
//    int sum = 0, val = 1;
//    //ֻҪval��ֵС��10��while��ѭ�������������
//    while (val <= 10)
//    {
//        sum += val;//��sum+val��ֵ��sum
//        ++val;//��val+1
//
//    }
//    std::cout << "sum of 1 to 10 inclusive is"
//        << sum << std::endl;
//
//
//    return 0;
//
//}
//int main()
//{
//    int n1 = 0, n2 = 1;
//    while (n2<=10)
//    {
//        n1 = n1 + n2;
//        n2 = n2 + 1;
//    }
//    std::cout << "sum of 1 to 10 inclusive is"
//        << n1 << std::endl;
//    return 0;
//}
//int main()
//{
//    int i = 50, sum = 0;
//    using namespace std;
//    while (i < 101)
//    {
//        sum += i;
//        i++;
//
//    }
//    cout << "the sum of 50 to 100 inclusive is"
//        << sum << endl;
//    return 0;
//
//}
//int main()
//{
//    int i = 50, sum = 0;
//    while (i < 101)
//    {
//        sum += i;
//        i++;
//    }
//    std::cout << "the sum form 50 to 100"
//        << "is" << sum << std::endl;
//
//    return 0;
//}
//int  main()
//{
//    int i = 10;
//    while (i>1)
//    {
//        i--;
//        std::cout << i;
//    }
//    std::cout << i << std::endl;
//   
//    return 0;
//    
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int sum = 0;
//    for (int  i = 10; i > 0; i--)
//    {
//        sum += 1;
//    }
//    cout << sum << endl;
//
//    return 0;
//
//}
//#include <iostream>
//int main()
//{
//    using namespace std;
//    cout << "please enter two numbers" << endl;
//    int v1 = 0, v2 = 0;
//    cin >> v1 >> v2;
//
//
//    return 0;
//
//}
/*
 *	��ĿҪ��
 *	��ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ���������
 */
#include<cstdlib>
#include<iostream>

int main()
{
    int v1, v2;
    std::cin >> v1 >> v2;
    int base = v1 < v2 ? v1 : v2;
    base++;
    while (base < (v1 > v2 ? v1 : v2)) 
    {
        std::cout << base++ << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}