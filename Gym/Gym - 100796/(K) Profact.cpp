#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>mySet;
vector<ll>v(21);
void init()
{
	v[0] = 1;
	for (int i = 1; i < 21; i++)
	{
		v[i] = v[i - 1] * i;
		mySet.insert(v[i]);
	}
}
void sol(ll x, ll s) {
	for (int i = s; i < 21; i++)
	{
		if (((ll)1e18 / x) < v[i])
			return;
		mySet.insert(x*v[i]);
		sol(x*v[i], i);
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	init();
	sol(1, 2);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		if (mySet.count(n) != 0)cout << "YES\n";
		else cout << "NO\n";

	}
}
