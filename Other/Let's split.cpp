#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m, t, k, num = 0;
	vector<long long>v;
	long long y;
	cin >> m;
	while (m--)
	{
		cin >> t >> k;
		y = t / k;
		long long z = k - (t % k);
		if (t < k)
		{
			cout << -1 << endl;
			continue;
		}
		else if (t % k == 0)
		{
			for (int i = 0; i < k; i++)
				cout << (t / k) << " ";
			cout << endl;
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				if (i >= z)
					cout << (y + 1) << " ";
				else
					cout << y << " ";
			}
			cout << endl;
		}
	}

}