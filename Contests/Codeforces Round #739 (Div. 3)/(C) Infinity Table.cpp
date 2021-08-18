#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t, a;
	cin >> t;
	while (t--)
	{
		cin >> a;
		ll x = ceil(sqrt(a));
		ll temp = pow(x, 2);
		ll temp2 = pow((x - 1), 2);
		if (a > (temp - x))
			cout << x << " " << (temp - a) + 1 << endl;
		else
			cout << a - temp2 << " " << x << endl;
	}

}
