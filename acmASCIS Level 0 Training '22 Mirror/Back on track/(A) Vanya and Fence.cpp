#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, h, a, ans = 0;
	cin >> n >> h;
	while (n--)
	{
		cin >> a;
		ans += (a > h) ? 2 : 1;
	}
	cout << ans;
}