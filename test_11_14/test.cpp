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
/*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/

int main() {
    int n = 0, score, max = 0, sum = 0;    //�������÷֣���߷�
    float avg = 0;                        //ƽ����
    while (true)
    {
        cout << "�������" << n + 1 << "���÷�[0,100]��";
        cin >> score;
        if (score == -1)
        {
            break;
        }
        if (score < 0 || score > 100)
        {
            cout << "�÷ֱ�����0��100֮�䣬���������롣" << endl;
            continue;
        }
        sum += score; //�ۼӵ÷�
        n++;          //������һ
        if (score > max)
        {
            max = score; //������߷�
        }
    }

    // ����ƽ���֣��������������
    if (n > 0) {
        avg = static_cast<float>(sum) / n; // ����ƽ���ֲ�ȷ���������
    }

    cout << "��߷֣�" << max << "\nƽ���֣�" << avg << endl; // ʹ�� avg ������ average
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
                    continue; // ���ܵݹ鵽���ڵ�
                }
                int sz = dfs(dfs, y, x);
                if (sz0 == 0) {
                    sz0 = sz; // ��¼��һ�����������Ĵ�С
                }
                else if (sz != sz0) { // ���ڴ�С��һ���Ķ�������
                    ok = false; // ע�ⲻ�� break���������� y ��ȻҪ�ݹ�
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

