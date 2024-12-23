#include <iostream>
#include <set>
using namespace std;
int t;
int n;
int ans;
int input;
set<int> s;
int main()
{
    cin >> t;
    while (t--)
    {
        /*初始化*/
        s.clear();
        ans = 0;

        cin >> n;

        /*由于只和前面的数字有关，所以可以在输入时就处理*/
        for (int i = 1; i <= n; ++i)
        {
            cin >> input;
            if (i == 1) //特判第一个数
            {
                s.insert(input);
                ans += input;
                continue;
            }
            set<int>::iterator tmp = s.lower_bound(input); //找到第一个大于等于当前数字的数
            /*
            如果tmp刚好等于当前数，那么tmp一定是最优的。
            如果tmp大于了当前数，那么tmp后面的一定比tmp差
            */
            if (tmp == s.end()) //当前的数字比之前的都大，没得选只能选最后一个
            {
                ans += abs(input - *(--tmp));
            }
            else if (tmp == s.begin()) //当前的数字比之前的都小，没得选只能选第一个
            {
                ans += abs(input - *(tmp));
            }
            else //选择tmp或tmp前一个
            {
                ans += min(abs(input - *(--tmp)), abs(input - *(tmp)));
            }
            s.insert(input); //将当前数字放入set
        }
        cout << ans << endl;
    }
    return 0;
}