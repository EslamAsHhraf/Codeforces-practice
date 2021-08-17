#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool com(pair<ll, ll>p1, pair<ll, ll>p2)
{
	return (p1.first != p2.first) ? (p1.first < p2.first) : (p1.second < p2.second);
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, s, ans = 0, t, e;
	cin >> n >> s;
	vector<pair<ll, ll>>v;
	while (n--)
	{
		cin >> t >> e;
		v.push_back(make_pair(t, e));
	}
	sort(v.begin(), v.end(), com);
	for (auto i : v)
	{
		s += i.first;
		ans += s - i.second;
	}
	cout << ans;
}
