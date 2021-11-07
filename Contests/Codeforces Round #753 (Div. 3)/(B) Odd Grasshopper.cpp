#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll x, n;
		cin >> x >> n;
		ll k = 0;
		if (n % 4 == 1) k = -n;
		if (n % 4 == 2) k = 1;
		if (n % 4 == 3) k = n + 1;

		if (x % 2 == 0)
			x += k;
		else
			x -= k;
		cout << x << endl;
	}
}