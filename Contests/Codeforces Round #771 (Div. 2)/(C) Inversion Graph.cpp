#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, t,a;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll MAX= -1, ans = 0;
		for (int i = 0; i < n; i++)
		{
			ll a;
			cin >> a;
			MAX = max(MAX, a);
			if (MAX == (i + 1))
				ans++;
		}
		cout << ans << endl;
	}
}