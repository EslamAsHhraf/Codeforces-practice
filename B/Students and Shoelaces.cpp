#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,aa,bb, ans = 0;
	cin >>m >>n;
	vector<set<long long>>v(m+1);
	for (int i = 0; i < n; i++)
	{
		cin >> aa >> bb;
		v[aa].insert(bb);
		v[bb].insert(aa);
	}
	while (true)
	{
		vector<long long>v2;
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i].size() == 1)
			{
				v2.push_back(i);
			}
		}
		for (int i = 0; i < v2.size(); i++)
		{
			auto ti = v[v2[i]].begin();
			if(ti!= v[v2[i]].end())
				v[*ti].erase(v2[i]);
			v[v2[i]].clear();
		}
		if (v2.size())
			ans++;
		else
			break;
	}
	cout << ans;
}