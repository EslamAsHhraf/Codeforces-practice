#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n,ans=0,a;
	cin >> n;
	vector<pair<ll, ll>>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v[a - 1].first = i ;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v[a - 1].second = i;
	}
	ll Max = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		if (v[i].second < Max)
			ans++;
		Max = max(Max, v[i].second);
	}
	cout << ans;
}