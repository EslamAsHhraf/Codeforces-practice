#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, t, a;
	cin >> t;
	while (t--)
	{
		cin >> n;
		map<ll, ll>myMap;
		vector<ll>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			myMap[a] = i;
			v[i] = a;
		}
		int Min = INT_MAX;
		pair<ll, ll>pp={0,0};
		for (ll i = 0; i < n; i++)
		{
			if (i+1 != v[i])
			{
				if (abs(i - myMap[v[i]]) < Min)
				{
					pp.first = min(i, myMap[i + 1]);
					pp.second = max(i, myMap[i + 1]);
					Min = abs(i - myMap[v[i]]);
				}
			}
		}
		reverse(v.begin() + pp.first, v.begin() + pp.second + 1);
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}