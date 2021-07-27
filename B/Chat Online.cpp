#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
	if (n == 0 || n == 1)
		return 1;

	else
		return n * fact(n - 1);
}
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long p, q, l, r,aa,bb,ans=0;
	cin >> p >> q >> l >> r;
	vector<pair<long long, long long>>v;
	vector<bool>time(1001);
	while (p--)
	{
		cin >> aa >> bb;
		v.push_back(make_pair(aa, bb));
	}
	while (q--)
	{
		cin >> aa >> bb;
		for (int i = 0; i < v.size(); i++)
		{
			long long x, y;
			x = v[i].first-bb;
			y = v[i].second-aa;
			if (x > r || y < l)
				continue;
			long long z = max(x, l);
			long long c = min(y, r);
			for (int t = z; t <= c; t++)
			{
				if (!time[t])
				{
					time[t] = true;
					ans++;
				}
			}
		}
	}
	cout << ans;
}