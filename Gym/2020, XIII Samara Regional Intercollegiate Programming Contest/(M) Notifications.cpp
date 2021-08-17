#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, a, b, ans = 0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		if (ans < a)
			ans += (a - ans);
		ans += b;
	}
	cout << ans;
}
