#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	vector<vector<ll>>adj(n);
	for (int i = 0; i < m; i++)
	{
		ll a, b;
		cin >> a >> b;
		a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	if (m % 2 == 0)
	{
		cout << 0 << endl;
		return;
	}
	vector<ll>del;

	for (int i = 0; i < n; i++)
	{
		if (adj[i].size() == 0)
			continue;
		if (adj[i].size() % 2 == 1)
			del.push_back(v[i]);
		else
		{
			for (auto u : adj[i])
			{
				if (adj[u].size() % 2 == 0) {
					ll sum = v[i] + v[u];
					del.push_back(sum);
				}
			}
		}
	}
	sort(del.begin(), del.end());
	cout << del[0] << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}