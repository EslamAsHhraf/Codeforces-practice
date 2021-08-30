#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		ll t = abs(a - b);
		if (a == 0 && b == 0)
			cout << 0 << endl;
		else if (a == b)
			cout << 1 << endl;
		else if ((t % 2) == 0)
			cout << 2 << endl;
		else
			cout << -1 << endl;
	}
}
