#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k;
	cin >> n>>k;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	ll ans = 0, count = 0;
	for (int i = 1; i < n; i++)
	{
		if (2 * v[i] > v[i - 1])
		{
			count++;
			if (count == k)
			{
				count--;
				ans++;
			}
		}
		else {
			count = 0;
		}
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}