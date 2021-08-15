#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	vector<ll>v(n);
	vector<ll>v2(n, -1);
	vector<ll>pos(200000 + 9, -1);
	set<ll>s;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (pos[v[i]] == -1)
		{
			pos[v[i]] = i;
		}
		else
		{
			v2[pos[v[i]]] = i;
			pos[v[i]] = i;
		}
	}
	queue<pair<ll, ll>>q;
	q.push(make_pair(0, 0));
	while (!q.empty())
	{
		pair<ll, ll> t = q.front();
		q.pop();
		if (t.first == (n - 1))
		{
			cout << t.second;
			return 0;
		}
		if (s.count(t.first + 1) == 0)
		{
			s.insert(t.first + 1);
			q.push(make_pair(t.first + 1, t.second + 1));
		}
		if (v2[t.first] != -1 && s.count(v2[t.first]) == 0)
		{
			s.insert(v2[t.first]);
			q.push(make_pair(v2[t.first], t.second + 1));
		}
	}
}
