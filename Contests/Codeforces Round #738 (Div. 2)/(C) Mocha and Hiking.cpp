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
		ll n, indx = 0;
		bool f = 0;
		cin >> n;
		vector<ll>v(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> v[i];

		}
		if (v[n] == 0)
		{
			for (int i = 1; i <= n + 1; i++)
			{
				cout << i << " ";

			}
			cout << endl;
			continue;
		}
		if (v[1] == 1)
		{
			f = 1;
			indx = 1;
		}
		else
		{
			for (int i = 1; i < n; i++)
			{
				if (v[i] == 0 && v[i + 1] == 1)
				{
					f = 1;
					indx = i + 1;
					break;
				}
			}
		}
		if (!f)
			cout << -1 << endl;
		else
		{
			for (int i = 1; i < indx; i++)
			{
				cout << i << " ";
			}
			cout << n + 1 << " " << indx << " ";
			for (int i = indx + 1; i <= n; i++)
			{
				cout << i << " ";
			}
			cout << endl;
		}
	}
}
