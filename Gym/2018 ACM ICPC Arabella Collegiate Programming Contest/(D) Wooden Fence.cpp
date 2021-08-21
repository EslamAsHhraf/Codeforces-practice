#include <bits/stdc++.h>
using namespace std;
#define ll long long
inline ll read()
{
	ll x = 0, f = 1;
	char ch = getchar();
	while (ch<'0' || ch>'9')
	{
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0'&&ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t, n, x, y;
	cin >> t;
	while (t--)
	{
		cin >> n >> x >> y;
		if (x >= ceil(n / 2.0) && y >= floor(n / 2.0))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
