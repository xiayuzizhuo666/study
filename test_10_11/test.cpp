#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double s = 0, x = 1;
	long k = 1;
	int sign = 1;

	while (abs(x) > 1e-8)
	{
		s += x;
		k += x;
		sign *= -1;
		x = sign / double(k);
	}
	s *= 4;
	cout << "the pi is" << s
		<< fixed << setprecision(8) << s << endl;
	

	system("pause");
	return 0;
}
