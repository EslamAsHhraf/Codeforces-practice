#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll  t;
	cin >> t;
	while (t--)
	{
		ll n, aa, sum;
		cin >> n;
		cin >> sum;
		for (int i = 1; i < n; i++)
		{
			cin >> aa;
			sum &= aa;
		}
		cout << sum << endl;
	}
}
