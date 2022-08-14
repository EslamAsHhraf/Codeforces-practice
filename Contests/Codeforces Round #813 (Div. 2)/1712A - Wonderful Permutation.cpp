#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n, k,a, ans = 0;
	cin >> n>>k;
	vector<ll>v(n),d;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		if (i <= k && a > k)
			ans++;
	}
	cout << ans<<"\n";
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

		

}