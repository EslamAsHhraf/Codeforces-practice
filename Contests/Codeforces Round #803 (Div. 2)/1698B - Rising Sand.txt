#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, k,ans = 0;
	cin >> n>>k;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	if (k == 1)
	{
		cout <<ceil((n-2)*1.0/2) << endl;
		return;
	}
	for (int i = 1; i < n-1; i++)
	{
		if (v[i] > (v[i - 1] + v[i + 1]))
			ans++;
	}
	cout << ans << endl;;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}