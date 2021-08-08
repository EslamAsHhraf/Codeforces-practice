#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll n, Min = 10e6;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; i++)
	{
		auto ti = upper_bound(v.begin(), v.end(), 2 * v[i]);
		if ((v.end() - ti) + (i) < Min)
			Min = (v.end() - ti) + i;
	}
	cout << Min;
