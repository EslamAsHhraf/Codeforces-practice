#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll  a, b, x, Max, Min, ans = 0;
	cin >> a >> b >> x;
	Min = min(a, b);
	Max = max(a, b);
	for (int i = Min;i <= Max; i++)
	{
		if (i%x == 0)
			ans++;
	}
	cout << ans;
}