#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >>n;
	ll ans = n;
	vector<ll>v(n);
	map< ll, ll>myMap;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		myMap[v[i]]++;
		if (myMap [v[i]] > 1) {
			ans = i;
			break;
		}
	}
	cout << n - ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}