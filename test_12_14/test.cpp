//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int total_students = 302 + 3; // ��ѧ����
//    int total_packs = 20250601; // �����ܰ���
//
//    // ��������ܹ��������������ʹ������ѧ�����ܻ����ͬ����������
//    int packs_per_student = total_packs / total_students;
//
//    // ��������ܹ������������
//    int max_packs_to_buy = packs_per_student * total_students;
//
//    cout << "С����������ܹ��� " << max_packs_to_buy << " ������" << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// ����������ǰ n ������
//vector<int> generatePrimes(int n) {
//    vector<int> primes;
//    int num = 2; // �� 2 ��ʼ
//    while (primes.size() < n) {
//        bool isPrime = true;
//        for (int prime : primes) {
//            if (num % prime == 0) {
//                isPrime = false;
//                break;
//            }
//        }
//        if (isPrime) {
//            primes.push_back(num);
//        }
//        num++;
//    }
//    return primes;
//}
//
//// �������ҵ����ܱ�ǰ n ��������������С������
//int findMinNumberNotDivisibleByPrimes(int n) {
//    vector<int> primes = generatePrimes(n);
//    int num = 2; // �� 2 ��ʼ
//    while (true) {
//        bool divisible = false;
//        for (int prime : primes) {
//            if (num % prime == 0) {
//                divisible = true;
//                break;
//            }
//        }
//        if (!divisible) {
//            return num;
//        }
//        num++;
//    }
//}
//
//int main() {
//    int n;
//    cout << "������һ�������� n: ";
//    cin >> n;
//
//    int result = findMinNumberNotDivisibleByPrimes(n);
//    cout << "���ܱ�ǰ " << n << " ��������������С��������: " << result << endl;
//
//    return 0;
//}


#include <iostream>
#include <set>
#include <cmath>

using namespace std;


int count(int N) {
    set<double> a; 
    a.insert(0.0); 
    a.insert(1.0);

    int newMarks = 0;

    for (int i = 2; i <= N; i++) {
        for (int k = 1; k < i; k++) {
            double position = static_cast<double>(k) / i;
            if (a.find(position) == a.end()) {
                a.insert(position);
                newMarks++;
            }
        }
    }

    int count = 0;
    for (int k = 1; k < N; k++) {
        double position = static_cast<double>(k) / N;
        if (a.find(position) == a.end()) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = count(N);
    cout << result << endl;

    return 0;
}
