#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, q, a, l, r, v, sum = 0;
	cin >> n;
	bool f = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (i % 2 == 0)
			sum += a;
		else
			sum -= a;
	}
	cin >> q;
	if (n % 2 != 0)
		f = 0;
	while (q--)
	{
		cin >> l >> r >> v;
		if ((r - l + 1) % 2 != 0)
		{
			sum += (r % 2 == 0) ? v : -1 * v;
		}
		if (f)
		{
			cout << sum << endl;
		}
		else
		{
			cout << -1 * sum << endl;
		}
	}

}
