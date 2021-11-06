#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, t1, t2, ans = 0;
	cin >> n;
	t1 = n / 50;
	if (t1 != 0)
	{
		n -= t1 * 50;
		ans += t1;
	}
	t1 = n / 20;
	if (t1 != 0)
	{
		n -= t1 * 20;
		ans += t1;
	}
	ans += (n);
	cout << ans;
}