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
        /*��ʼ��*/
        s.clear();
        ans = 0;

        cin >> n;

        /*����ֻ��ǰ��������йأ����Կ���������ʱ�ʹ���*/
        for (int i = 1; i <= n; ++i)
        {
            cin >> input;
            if (i == 1) //���е�һ����
            {
                s.insert(input);
                ans += input;
                continue;
            }
            set<int>::iterator tmp = s.lower_bound(input); //�ҵ���һ�����ڵ��ڵ�ǰ���ֵ���
            /*
            ���tmp�պõ��ڵ�ǰ������ôtmpһ�������ŵġ�
            ���tmp�����˵�ǰ������ôtmp�����һ����tmp��
            */
            if (tmp == s.end()) //��ǰ�����ֱ�֮ǰ�Ķ���û��ѡֻ��ѡ���һ��
            {
                ans += abs(input - *(--tmp));
            }
            else if (tmp == s.begin()) //��ǰ�����ֱ�֮ǰ�Ķ�С��û��ѡֻ��ѡ��һ��
            {
                ans += abs(input - *(tmp));
            }
            else //ѡ��tmp��tmpǰһ��
            {
                ans += min(abs(input - *(--tmp)), abs(input - *(tmp)));
            }
            s.insert(input); //����ǰ���ַ���set
        }
        cout << ans << endl;
    }
    return 0;
}