#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, m, a, b, c;
	cin >> n >> m;
	ll temp = 0;
	vector<ll>v(n+1);
	while (m--)
	{
		cin >> a >> b >> c;
		v[b] += c;
		v[a] -= c;
	}
	for (int i = 1; i <= n; i++)
	{
		temp += (v[i] < 0) ? 0 : v[i];
	}
	cout << temp;
}