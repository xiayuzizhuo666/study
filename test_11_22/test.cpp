#include <vector>//开出一道困难，只能看看解法了
#include <iostream>
#include <numeric> // 包含 std::iota

using namespace std; // 使用 std 命名空间

class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> fa(n - 1);
        if (n > 1) {
            iota(fa.begin(), fa.end(), 0); // 仅当 n > 1 时初始化 fa
        }

        // 非递归并查集
        auto find = [&](int x) -> int {
            int rt = x;
            while (fa[rt] != rt) {
                rt = fa[rt];
            }
            while (fa[x] != rt) {
                int tmp = fa[x];
                fa[x] = rt;
                x = tmp;
            }
            return rt;
            };

        vector<int> ans(queries.size());
        int cnt = n - 1; // 并查集连通块个数
        for (int qi = 0; qi < queries.size(); qi++) {
            int l = queries[qi][0], r = queries[qi][1] - 1;
            int fr = find(r);
            for (int i = find(l); i < r; i = find(i + 1)) {
                fa[i] = fr;
                cnt--;
            }
            ans[qi] = cnt;
        }
        return ans;
    }
};

int main() {
    // 示例使用
    Solution solution;
    vector<vector<int>> queries = { {0, 1}, {1, 2}, {0, 2} };
    vector<int> result = solution.shortestDistanceAfterQueries(3, queries);

    // 输出结果
    for (int dist : result) {
        cout << dist << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int a[10010],b,c,d,e,f=0;
    cin>>b>>c;
    for(int i=0;i<=b;i++)
    {
        a[i]=1;//把有树的标记上
    }
    for(int j=0;j<=c-1;j++)
    {
        cin>>d>>e;
        for(int k=d;k<=e;k++)
        {
            a[k]=0;//被砍的记得改为0
        }
    }
    for(int l=0;l<=b;l++)
    {
        if (a[l]==1)
            f++;//统计剩余的树
    }
    cout<<f;
    return 0;
}