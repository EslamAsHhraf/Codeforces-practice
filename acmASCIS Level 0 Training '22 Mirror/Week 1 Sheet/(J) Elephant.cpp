#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0, n;
void solve(ll i)
{
	ll t1;
	t1 = n / i;
	n -= t1 * i;
	ans += t1;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 5; i > 0; i--)
	{
		solve(i);
		if (n == 0)
			break;
	}
	cout << ans;
}