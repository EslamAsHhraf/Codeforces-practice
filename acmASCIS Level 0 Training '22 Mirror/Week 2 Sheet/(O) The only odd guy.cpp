#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, a, sum = 0;
		cin >> n;
		while (n--)
		{
			cin >> a;
			sum ^= a;
		}
		cout << sum << endl;
	}
}