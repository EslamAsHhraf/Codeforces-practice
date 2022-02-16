#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll w, h, ans = 0;
	cin >> w >> h;
	for (ll i = 1; i <= w; i++)
		for (ll j = 1; j <= h; j++)
			ans += min(i, w - i)*min(j, h - j);
	cout << ans;
}