#include <vector>//����һ�����ѣ�ֻ�ܿ����ⷨ��
#include <iostream>
#include <numeric> // ���� std::iota

using namespace std; // ʹ�� std �����ռ�

class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> fa(n - 1);
        if (n > 1) {
            iota(fa.begin(), fa.end(), 0); // ���� n > 1 ʱ��ʼ�� fa
        }

        // �ǵݹ鲢�鼯
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
        int cnt = n - 1; // ���鼯��ͨ�����
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
    // ʾ��ʹ��
    Solution solution;
    vector<vector<int>> queries = { {0, 1}, {1, 2}, {0, 2} };
    vector<int> result = solution.shortestDistanceAfterQueries(3, queries);

    // ������
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
        a[i]=1;//�������ı����
    }
    for(int j=0;j<=c-1;j++)
    {
        cin>>d>>e;
        for(int k=d;k<=e;k++)
        {
            a[k]=0;//�����ļǵø�Ϊ0
        }
    }
    for(int l=0;l<=b;l++)
    {
        if (a[l]==1)
            f++;//ͳ��ʣ�����
    }
    cout<<f;
    return 0;
}