#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long m;
		bool f = 0;
		cin >> m;
		vector<long long>r;
		vector<long long>v(m);
		map <long long, long long>ms;
		map <long long, long long>msort;
		for (int z = 0; z < m; z++)
			cin >> v[z];
		r = v;
		sort(r.begin(), r.end());
		for (int z = 0; z < m; z++)
		{
			ms[v[z]] += z % 2;
			msort[r[z]] += z % 2;
		}
		for (auto it = ms.begin(); it != ms.end(); it++)
		{
			if (it->second != msort[it->first])
			{
				f = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if (!f)
			cout << "YES" << endl;
	}
}