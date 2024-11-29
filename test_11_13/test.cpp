#include <iostream>
#include <vector> // 添加 vector 头文件
#include <string> // 添加 string 头文件
#include <algorithm> // 如果要使用 lower_bound 也需要包含这个头文件

using namespace std; // 添加这一行以简化命名空间

class Solution {
public:
    vector<long long> countKConstraintSubstrings(string s, int k, vector<vector<int>>& queries) {
        int n = s.length();
        vector<int> left(n);
        vector<long long> sum(n + 1);
        int cnt[2]{}, l = 0;

        for (int i = 0; i < n; i++) {
            cnt[s[i] & 1]++;
            while (cnt[0] > k && cnt[1] > k) {
                cnt[s[l++] & 1]--;
            }
            left[i] = l; // 记录合法子串右端点 i 对应的最小左端点 l
            // 计算 i-left[i]+1 的前缀和
            sum[i + 1] = sum[i] + i - l + 1;
        }

        vector<long long> ans(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0], r = queries[i][1];
            // 如果区间内所有数都小于 l，结果是 j=r+1
            int j = lower_bound(left.begin() + l, left.begin() + r + 1, l) - left.begin();
            ans[i] = sum[r + 1] - sum[j] + (long long)(j - l + 1) * (j - l) / 2;
        }
        return ans;
    }
};
