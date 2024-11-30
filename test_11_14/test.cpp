//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//
//
//	return 0;
//}







#include <iostream>
#include <vector>
using namespace std;
/*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/

int main() {
    int n = 0, score, max = 0, sum = 0;    //人数，得分，最高分
    float avg = 0;                        //平均分
    while (true)
    {
        cout << "请输入第" << n + 1 << "个得分[0,100]：";
        cin >> score;
        if (score == -1)
        {
            break;
        }
        if (score < 0 || score > 100)
        {
            cout << "得分必须在0到100之间，请重新输入。" << endl;
            continue;
        }
        sum += score; //累加得分
        n++;          //人数加一
        if (score > max)
        {
            max = score; //更新最高分
        }
    }

    // 计算平均分，避免除以零的情况
    if (n > 0) {
        avg = static_cast<float>(sum) / n; // 计算平均分并确保浮点计算
    }

    cout << "最高分：" << max << "\n平均分：" << avg << endl; // 使用 avg 而不是 average
    return 0;
}

class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> g(n);
        for (auto& e : edges) {
            int x = e[0], y = e[1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int ans = 0;
        auto dfs = [&](auto&& dfs, int x, int fa) -> int {
            int size = 1, sz0 = 0;
            bool ok = true;
            for (int y : g[x]) {
                if (y == fa) {
                    continue; // 不能递归到父节点
                }
                int sz = dfs(dfs, y, x);
                if (sz0 == 0) {
                    sz0 = sz; // 记录第一个儿子子树的大小
                }
                else if (sz != sz0) { // 存在大小不一样的儿子子树
                    ok = false; // 注意不能 break，其他子树 y 仍然要递归
                }
                size += sz;
            }
            ans += ok;
            return size;
            };
        dfs(dfs, 0, -1);
        return ans;
    }
};

