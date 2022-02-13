#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, x, y;
vector<pair<ll, ll>>v;
ll db[1005][1005][2];// 0 is # and 1 is *
ll solve(ll type_before,ll width,ll i)
{
	if (i == m)
	{
		if (width < x)
			return INT_MAX;
		return 0;
	}
	if (db[i][width][type_before] != -1)
		return db[i][width][type_before];
	if (width == y)
	{
		if (type_before == 0)
			return db[i][width][type_before]=solve(1, 1, i + 1) + v[i].second;
		else
			return db[i][width][type_before] =solve(0, 1, i + 1) + v[i].first;
	}
	else if (width <x)
	{
		if (type_before == 0)
			return db[i][width][type_before]=solve( 0, width+1, i+1) +v[i].first;
		else
			return db[i][width][type_before]= solve(1, width+1, i + 1) + v[i].second;
	}
	else
	{
		if (type_before == 0)
			return db[i][width][type_before]=min(solve(1, 1, i + 1) + v[i].second, solve(0, width+1, i + 1) + v[i].first);
		else
			return db[i][width][type_before]=min(solve(1, width+1, i + 1) + v[i].second, solve(0, 1, i + 1) + v[i].first);
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	memset(db, -1, sizeof(db));
	char a;
	cin >> n>>m>>x>>y;
	v.resize(m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j< m; j++)
		{
			cin >> a;
			if (a == '#')
				v[j].second++;
			else
				v[j].first++;
		}
	}
	cout << min(solve(0,1, 1) + v[0].first,solve(1,1,1) + v[0].second);
}