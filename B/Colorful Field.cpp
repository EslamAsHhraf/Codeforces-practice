#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, m, t, k, aa, bb, loc = 1;
	cin >> n >> m >> k >> t;
	vector< long long int>v;
	for (long long int i = 0; i < k; i++)
	{
		cin >> aa >> bb;
		v.push_back((aa - 1)*m + bb);
	}
	sort(v.begin(), v.end());
	for (long long int i = 1; i <= t; i++)
	{
		cin >> aa >> bb;
		auto ti = lower_bound(v.begin(), v.end(), (aa - 1) * m + bb);
		if (v[ti - v.begin()] == (aa - 1) * m + bb)
			cout << "Waste" << endl;
		else
		{
			loc = ((aa - 1)*m + bb) - (ti - v.begin());
			switch (loc % 3)
			{
			case 1:
				cout << "Carrots" << endl;
				break;
			case 2:
				cout << "Kiwis" << endl;
				break;
			case 0:
				cout << "Grapes" << endl;
				break;
			}
		}
	}
}