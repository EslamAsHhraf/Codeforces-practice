#include<bits/stdc++.h>
using namespace std;
int main()
{
	multimap<long long int, pair<long long int, long long int>>m;
	long long int n, k, aa, bb, ans = 0;
	cin >> n >> k;
	for (long long int i = 0; i < n; i++)
	{
		cin >> aa >> bb;
		if (bb < 2 * aa)
			m.insert({ bb - aa, make_pair(aa, bb) });
		else
			m.insert({ aa , make_pair(aa, bb) });
	}
	auto ti = m.end();
	ti--;
	while (k--)
	{
		ti->second.first *= 2;
		if (ti == m.begin())
			break;
		ti--;
	}
	for (ti = m.begin(); ti != m.end(); ti++)
	{
		if (ti->second.second < ti->second.first)
			ans += ti->second.second;
		else
			ans += ti->second.first;
	}
	cout << ans;
}