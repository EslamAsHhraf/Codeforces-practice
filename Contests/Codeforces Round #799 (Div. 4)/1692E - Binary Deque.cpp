#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, s, a, sum = 0, ans = -1;
	cin >> n >> s;
	vector<ll>v(n);
	//ll l = 0, r = n + 1;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	ll j = 0;
	for (ll i = 0; i < n; i++) {
		for (; j < n; j++) {
			if (sum+v[j] > s)
				break;
			sum += v[j];
		}
		if (sum == s) {
			ans = max(ans, j -i  + 1);
		}
		sum -= v[i];
	}
	if (ans != -1)
		cout << n - ans + 1 << endl;
	else
		cout << -1 << endl;

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}