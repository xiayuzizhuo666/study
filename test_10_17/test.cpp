//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<unsigned>scores(11, 0);
//	unsigned grade;
//	while (cin >> grade) {
//		if (grade <= 100) {
//			scores[grade / 10]++;
//		}
//	}
//	for (int i = 0; i < 11; i++) {
//		cout << i * 10 << "-" << (i + 1) * 10 - 1 << ": " << scores[i] << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<fstream>

using namespace std;


float fun(float x) {
    if (x < 10) {
        return x; // x < 10 时返回 x
    }
    else if (x >= 10 && x <= 20) {
        return -x; // 10 <= x <= 20 时返回 -x
    }
    else {
        return x * 3; // x > 20 时返回 x * 3
    }
}

int main() {
    float x;
    cin >> x;
    float e = fun(x);
    cout << e << endl;
    return 0;
}