//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
//int main() {
//    int arr[100001];
//    int n = 0;
//
//    cin >> n; 
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i]; 
//    }
//
//    sort(arr, arr + n);
//
//    int count = 0; 
// 
//    int half = n / 2;
//
//    // 寻找所有的可能的 k
//    for (int i = 0; i < n - 1; i++) {
//        // 找到第一个能让简单题和难题数量相等的情况
//        // 单词数简单题=题数/2
//        if (i + 1 == half && arr[i] != arr[i + 1]) {
//            count++;
//        }
//    }
//
//    // 输出符合条件的k的数量
//    cout << count << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm> // 包含排序和算法库
//using namespace std;
//
//int main() {
//    int arr[100001]; // 定义最大容量
//    int n = 0;
//
//    cin >> n; // 输入问题的数量
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i]; // 输入每道题的难度
//    }
//
//    sort(arr, arr + n); // 对难度数组进行排序
//
//    int count = 0; // 统计符合条件的k的个数
//    int half = n / 2; // 计算简单和困难题目的数量
//
//    if (arr[half - 1] < arr[half]) {
//        count = 1; // 找到一个合适的k值
//    }
//
//    // 输出符合条件的k的数量
//    cout << count << endl;
//
//    return 0;
//}


#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5 + 10;
int n;
int d[maxn];

// 判断能否将问题分为简单题和困难题
bool canDivide(int ans, bool isEasy) {
    int easy = 0; // 计数简单题的数量
    for (int i = 1; i <= n; i++) {
        if (d[i] < ans) {
            easy++;
        }
    }
    // 返回简单题数量与 n/2 的关系
    return isEasy ? (easy >= n / 2) : (easy <= n / 2);
}

void solve() {
    cin >> n; // 输入问题数量
    for (int i = 1; i <= n; i++) {
        cin >> d[i]; // 输入每道题的难度
    }

    sort(d + 1, d + n + 1); // 排序难度数组

    // 查找适合的下界
    int lowerBound = 0, upperBound = 1e7; // k 的搜索范围
    int ans1 = 0;
    while (lowerBound + 1 < upperBound) {
        int mid = (lowerBound + upperBound) / 2;
        if (canDivide(mid, false)) {
            lowerBound = mid; // 可以分割，尝试更大的 k
        }
        else {
            upperBound = mid; // 不能分割，k 要更小
        }
    }
    ans1 = canDivide(upperBound, false) ? upperBound : lowerBound; // 计算下界

    // 查找适合的上界
    lowerBound = 0; // 重置下界
    upperBound = 1e7; // 重置上界
    int ans2 = 0;
    while (lowerBound + 1 < upperBound) {
        int mid = (lowerBound + upperBound) / 2;
        if (canDivide(mid, true)) {
            upperBound = mid; // 简单题数量合适，尝试更小的 k
        }
        else {
            lowerBound = mid; // 简单题数量不合适，k 要更大
        }
    }
    ans2 = canDivide(lowerBound, true) ? lowerBound : upperBound; // 计算上界

    // 输出 k 的数量
    cout << ans1 - ans2 + 1 << endl;
}

int main() {
    solve();
    return 0;
}