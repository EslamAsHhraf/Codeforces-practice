#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n, m, d,a,ans=0;
	cin >> n >> m >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (i % d == 0) {
			if (a % m == 0)
				ans++;
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}