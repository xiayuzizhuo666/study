#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        int onecnt = 0, zerocnt = 0, ans = 0;

        for (int l = 0, r = 0; r < n; r++) {
            s[r] == '0' ? zerocnt++ : onecnt++;

            while (zerocnt > k && onecnt > k) {
                if (s[l++] == '0') {
                    zerocnt--;
                }
                else {
                    onecnt--;
                }
            }
            ans += r - l + 1;
        }

        return ans;
    }
};