//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int total_students = 302 + 3; // 总学生数
//    int total_packs = 20250601; // 辣条总包数
//
//    // 计算最多能购买的辣条包数，使得所有学生都能获得相同数量的辣条
//    int packs_per_student = total_packs / total_students;
//
//    // 计算最多能购买的辣条包数
//    int max_packs_to_buy = packs_per_student * total_students;
//
//    cout << "小蓝教练最多能购买 " << max_packs_to_buy << " 包辣条" << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// 函数：生成前 n 个质数
//vector<int> generatePrimes(int n) {
//    vector<int> primes;
//    int num = 2; // 从 2 开始
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
//// 函数：找到不能被前 n 个质数整除的最小正整数
//int findMinNumberNotDivisibleByPrimes(int n) {
//    vector<int> primes = generatePrimes(n);
//    int num = 2; // 从 2 开始
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
//    cout << "请输入一个正整数 n: ";
//    cin >> n;
//
//    int result = findMinNumberNotDivisibleByPrimes(n);
//    cout << "不能被前 " << n << " 个质数整除的最小正整数是: " << result << endl;
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
