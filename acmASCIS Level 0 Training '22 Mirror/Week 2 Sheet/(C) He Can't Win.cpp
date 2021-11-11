#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll l, r, ans = 0;
void solve()
{
	ll sum = 0;
	for (int j = l; j <= r; j++)
	{
		sum = 0;
		for (int i = 1; i <= sqrt(j); i++)
		{
			if (j%i == 0)
			{
				if (j / i == i)
					sum += i;
				else
					sum += i + j / i;
			}
		}
		if (sum == 2 * j)
			ans++;
	}
	cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	cin >> l >> r;
	solve();
}