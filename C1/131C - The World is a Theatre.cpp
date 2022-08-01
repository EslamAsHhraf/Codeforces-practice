#include<bits/stdc++.h>
using namespace std;
#define ll  long long
unsigned long long nCr(ll n, ll r)
{
	long long result=1;
	for (int i = 0; i < r; ++i)
	{
		result *= (n - i);
		result /= (i + 1);
	}
	return result;
}



void solve()
{
	ll n, m, t;
	cin >> n >> m >> t;
	ll way = 0;
	for (int i = 4; i <= n; i++)
	{
		ll r = t - i;
		if (r <= m && r >= 1)
			way += nCr(n, i) * nCr(m, r);
	}
	cout << way;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	/*ll t;
	cin >> t;
	while (t--)*/
		solve();
}