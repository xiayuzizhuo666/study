#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<cmath>
	using namespace std;

	int main()
	{
		int n;
		while (cin >> n)
		{
			vector<int>p;
			while (true)
			{
				p.push_back(n);
				cin >> n;
				if (n == 0)
				{
					break;
				}



			}
			int len = p.size();
			//		cout << len << endl;
			for (int i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					if (p[i] > p[j])
					{
						int temp = p[i];
						p[i] = p[j];
						p[j] = temp;
					}
				}
			}
			//for(int i=0;i<len;i++)
			{
				//	cout<<p[i]<<" ";
			}
			cout << p[0] << endl;
		}
		system("pause");

		return 0;
	}