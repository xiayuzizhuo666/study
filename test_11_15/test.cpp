#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int fib(int n) {
		int a = 0, b = 1, c;
		for (int i = 0; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return a;
	}
};
class Solution {
public:
	void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
		int n = A.size();
		move(n, A, B, C);
	}

	void move(int n, vector<int>& A, vector<int>& B, vector<int>& C) {
		if (n == 1) {
			C.push_back(A.back());
			A.pop_back();
			return;
		}

		move(n - 1, A, C, B);
		C.push_back(A.back()); 
		A.pop_back(); 
		move(n - 1, B, A, C); 
	}
};
