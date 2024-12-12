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
//    // Ѱ�����еĿ��ܵ� k
//    for (int i = 0; i < n - 1; i++) {
//        // �ҵ���һ�����ü��������������ȵ����
//        // ����������=����/2
//        if (i + 1 == half && arr[i] != arr[i + 1]) {
//            count++;
//        }
//    }
//
//    // �������������k������
//    cout << count << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm> // ����������㷨��
//using namespace std;
//
//int main() {
//    int arr[100001]; // �����������
//    int n = 0;
//
//    cin >> n; // �������������
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i]; // ����ÿ������Ѷ�
//    }
//
//    sort(arr, arr + n); // ���Ѷ������������
//
//    int count = 0; // ͳ�Ʒ���������k�ĸ���
//    int half = n / 2; // ����򵥺�������Ŀ������
//
//    if (arr[half - 1] < arr[half]) {
//        count = 1; // �ҵ�һ�����ʵ�kֵ
//    }
//
//    // �������������k������
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

// �ж��ܷ������Ϊ�����������
bool canDivide(int ans, bool isEasy) {
    int easy = 0; // �������������
    for (int i = 1; i <= n; i++) {
        if (d[i] < ans) {
            easy++;
        }
    }
    // ���ؼ��������� n/2 �Ĺ�ϵ
    return isEasy ? (easy >= n / 2) : (easy <= n / 2);
}

void solve() {
    cin >> n; // ������������
    for (int i = 1; i <= n; i++) {
        cin >> d[i]; // ����ÿ������Ѷ�
    }

    sort(d + 1, d + n + 1); // �����Ѷ�����

    // �����ʺϵ��½�
    int lowerBound = 0, upperBound = 1e7; // k ��������Χ
    int ans1 = 0;
    while (lowerBound + 1 < upperBound) {
        int mid = (lowerBound + upperBound) / 2;
        if (canDivide(mid, false)) {
            lowerBound = mid; // ���Էָ���Ը���� k
        }
        else {
            upperBound = mid; // ���ָܷk Ҫ��С
        }
    }
    ans1 = canDivide(upperBound, false) ? upperBound : lowerBound; // �����½�

    // �����ʺϵ��Ͻ�
    lowerBound = 0; // �����½�
    upperBound = 1e7; // �����Ͻ�
    int ans2 = 0;
    while (lowerBound + 1 < upperBound) {
        int mid = (lowerBound + upperBound) / 2;
        if (canDivide(mid, true)) {
            upperBound = mid; // �����������ʣ����Ը�С�� k
        }
        else {
            lowerBound = mid; // �������������ʣ�k Ҫ����
        }
    }
    ans2 = canDivide(lowerBound, true) ? lowerBound : upperBound; // �����Ͻ�

    // ��� k ������
    cout << ans1 - ans2 + 1 << endl;
}

int main() {
    solve();
    return 0;
}