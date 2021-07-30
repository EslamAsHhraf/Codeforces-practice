#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, aa,bb, ans = 2;
	vector<pair<long long,long long>>v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aa>>bb;
		v.push_back(make_pair(aa, bb));
	}
	if (v.size() == 1)
		ans = 1;
	for (int i = 1; i < n-1; i++)
	{
		if (v[i].first - v[i].second > v[i - 1].first)
			ans++;
		else if (v[i].first + v[i].second < v[i + 1].first)
		{
			ans++;
			v[i].first += v[i].second;
		}
	}
	cout << ans;
}