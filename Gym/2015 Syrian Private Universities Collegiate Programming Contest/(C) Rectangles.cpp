#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, x, x2, y, n, temp;
	cin >> t;
	while (t-- > 0)
	{
		ll area = 0;
		int a[109][109];
		memset(a, 0, sizeof(a));
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> x2 >> y;
			for (ll z = x; z < x2; z++)
			{
				for (ll e = 0; e < y; e++)
				{
					a[z][e] = 1;
				}

			}
		}
		for (ll z = 0; z < 109; z++)
		{
			for (ll e = 0; e < 109; e++)
			{
				if (a[z][e] == 1)
					area++;
			}

		}
		cout << area << endl;
	}
}
