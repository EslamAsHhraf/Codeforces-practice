#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll eq(ll a, ll b, ll x)
{
	return a * x*x + b * x;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		ll a, b, n, r = 1, ans = 0, comp = -1;
		map<ll, ll>points;
		cin >> a >> b >> n;
		if (eq(a, b, 1) > n)
		{
			cout << "-1" << endl;
			continue;
		}
		while (true)
		{
			ll Max = 0, temp;
			map<ll, ll>myMap;
			if (eq(a, b, r) > n)
			{
				break;
			}
			temp = eq(a, b, r);
			while (temp)
			{
				myMap[temp % 10]++;
				Max = max(Max, myMap[temp % 10]);
				temp /= 10;
			}
			for (auto i : myMap)
			{
				if (i.second == Max)
					points[i.first]++;
			}
			r++;
		}
		for (auto k : points)
		{
			if (k.second > comp)
			{
				comp = k.second;
				ans = k.first;
			}
		}
		cout << ans << endl;
	}
}
