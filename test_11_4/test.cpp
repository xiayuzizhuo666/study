#include <iostream>
using namespace std;
class Solution1 {
public:
    bool judgeSquareSum(int c) {
        long left = 0;
        long right = (int)sqrt(c);
        while (left <= right)
        {
            long res = left * left + right * right;
            if (res == c)
            {
                return true;
            }
            if (res < c)
                ++left;
            else
                --right;
        }
        return false;
    }
};


class Solution2 {
public:
    bool judgeSquareSum(int c)
    {
        for (int a = 0; a * a <= c / 2; a++)
        {
            int b = sqrt(c - a * a);
            if (a * a + b * b == c)
                return true;

        }
        return false;
    }
};