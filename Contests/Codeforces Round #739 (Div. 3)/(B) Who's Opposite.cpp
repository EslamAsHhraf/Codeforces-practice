#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t, a, b, c;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		ll Min = min(a, b);
		ll Max = max(a, b);
		ll temp = abs(a - b);
		temp++;
		if (c > (2 * (temp - 1)) || (Min >= temp))
		{
			cout << -1 << endl;
		}
		else if (c >= temp)
		{
			cout << c - (temp - 1) << endl;
		}
		else
		{
			cout << c + (temp - 1) << endl;
		}
	}

}
