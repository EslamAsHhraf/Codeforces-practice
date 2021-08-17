#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, ans = 0, a, b;
	cin >> n;
	map<ll, ll>m;
	for (int i = 1; i < n; i++)
	{
		cin >> a >> b;
		m[a]++;
		m[b]++;
	}
	for (auto i : m)
	{
		if (i.second == 1)
			ans++;
	}
	cout << (ans + 1) / 2;
}
